using UnityEngine;
using System.Collections;

public class InitShare : MonoBehaviour {
    public bool blnInitNativeShare;
	// Use this for initialization
	void Start () {
		Init();
	}
	

	public void Init(){  
		Debug.Log("开始进行初始化");
        blnInitNativeShare = true;  
        GJCNativeShare.Instance.onShareSuccess = OnShareSuccess;  
        GJCNativeShare.Instance.onShareCancel = OnShareCancel;  
    }  

    void OnShareSuccess(string platform){
        Debug.Log("分享成功");  
        //...your code  
    } 

    void OnShareCancel(string platform){
    	Debug.Log("分享取消");
        //...your code  
    }


    public void ShareWithNative(){  
        StartCoroutine(TakeScreenshot());  
    }  

    private IEnumerator TakeScreenshot()  
    {  
        Debug.Log("kaishijietu");
        yield return new WaitForEndOfFrame();  
        var width = Screen.width;  
        var height = Screen.height;  
        var tex = new Texture2D(width, height, TextureFormat.RGB24, false);  
        // Read screen contents into the texture
        string shareDefaultText = "我是李豆豆";
        tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);  
        tex.Apply();  
        GJCNativeShare.Instance.NativeShare(shareDefaultText, tex);  
        Destroy(tex);  
    }  

}
