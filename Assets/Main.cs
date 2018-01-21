using UnityEngine;
using System.Collections;

public class Main : MonoBehaviour {

    void Start()  
    {  
        GJCNativeShare.Instance.onOpenAppStore = OnNativeEvent;  
    }  
    public void OnOpenAppStore(){  
        GJCNativeShare.Instance.OpenAppStore("1290069481");  
    }  
    void OnNativeEvent(string msg){  
        Debug.Log("OnNativeEvent: " + msg);  
        //--- your code  
    } 
}
