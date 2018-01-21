using System.Collections;  
using System.Collections.Generic;  
using UnityEngine;  
#if UNITY_IPHONE && !UNITY_EDITOR  
using System.Runtime.InteropServices;  
#endif  
  
public class GJCNativeShare : MonoBehaviour {  
    #if UNITY_IPHONE && !UNITY_EDITOR  
    [DllImport ("__Internal")]  
    private static extern void _GJC_NativeShare(string text, string encodedMedia);  


    [DllImport ("__Internal")]  
    private static extern void _GJC_OpenAppStore(string appID);//---add---  
    #endif  
  
    public delegate void OnShareSuccess(string platform);  
    public delegate void OnShareCancel(string platform);
    public delegate void OnNativeEvent(string msg); 
  
    public OnShareSuccess onShareSuccess = null;  
    public OnShareCancel onShareCancel = null;
    public OnNativeEvent onOpenAppStore = null;  
  
    private static GJCNativeShare _instance = null;  
    public static GJCNativeShare Instance {  
        get {  
            if (_instance == null) {  
                _instance = GameObject.FindObjectOfType(typeof(GJCNativeShare)) as GJCNativeShare;  
                if (_instance == null) {  
                    _instance = new GameObject ().AddComponent<GJCNativeShare> ();  
                    _instance.gameObject.name = _instance.GetType ().FullName;  
                }  
            }  
            return _instance;  
        }  
    }  
  
    public void NativeShare(string text, Texture2D texture = null) {  
        Debug.Log("NativeShare");  
        #if UNITY_IPHONE && !UNITY_EDITOR  
            if(texture != null) {  
                Debug.Log("NativeShare: Texture");  
                byte[] val = texture.EncodeToPNG();  
                string bytesString = System.Convert.ToBase64String (val);  
                _GJC_NativeShare(text, bytesString);  
            } else {
                // Debug.Log("NativeShare: No Texture");
                _GJC_NativeShare(text, "");
            }  
        #endif
    }  
    public void OpenAppStore(string id)
    {
        Debug.Log("OpenAppStore");
        #if UNITY_IPHONE && !UNITY_EDITOR   
                Debug.Log("OpenAppStore: OpenAppStore");  
                _GJC_OpenAppStore(id);  
        #endif 
    } 

    private void OnNativeShareSuccess(string result){
        // Debug.Log("success: " + result);  
        if (onShareSuccess!=null){
            onShareSuccess(result);
        }  
    }  
    private void OnNativeShareCancel(string result){  
        // Debug.Log("cancel: " + result);  
        if (onShareCancel != null){  
            onShareCancel(result);  
        }  
    }  
        //加载完毕开始展示界面 //---add---  
    private void OnOpenAppStoreSuccess(string result){  
        Debug.Log("Success: " + result);  
        if (onOpenAppStore != null){  
            onOpenAppStore("Success");  
        }  
    } 
    //界面关闭，无论是取消还是其他操作 //---add---  
    private void OnOpenAppStoreFinished(string result){  
        Debug.Log("Finished: " + result);  
        if (onOpenAppStore != null){  
            onOpenAppStore("Finished");  
        }  
    }

    //如果iOS版本不支持，则自动跳转到 AppStore 中展示，返回 //---add---  
    private void OnOpenAppStoreSuccessURL(string result){  
        Debug.Log("Success: " + result);  
        if (onOpenAppStore != null){  
            onOpenAppStore("Success on url");  
        }  
    }

        //加载失败，出现问题 //---add---  
    private void OnOpenAppStoreFailed(string result){  
        Debug.Log("Failed: " + result);  
        if (onOpenAppStore != null){  
            onOpenAppStore("Failed");  
        }  
    }   

}  