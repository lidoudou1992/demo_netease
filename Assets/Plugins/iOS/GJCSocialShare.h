#import <UIKit/UIKit.h>
#import <StoreKit / StoreKit.h> //引入弹框库
 
@interface  GJCSocialShare：NSObject <SKStoreProductViewControllerDelegate> //实现弹框的回调，在取消时会有个回调，必须要加  
@interface GJCSocialShare : NSObject  
  
+ (id) sharedInstance;  
  
// - (void) nativeShare:(NSString*)text media: (NSString*) media;
- （void ） nativeShare ：（NSString *）text  media ：（NSString *）media;  
- （void ） showStoreProductInApp :( NSString  *）appID; //通过传入一个APPID，去打开对应的应用详情  
- （void ） productViewControllerDidFinish :( SKStoreProductViewController  *）viewController; //弹框关闭时的回调  
@end  
  
@interface GJC_DataConvertor : NSObject  
  
+ (NSString*) charToNSString: (char*)value;  
+ (const char*) NSIntToChar: (NSInteger) value;  
+ (const char*) NSStringToChar: (NSString*) value;  
+ (NSArray*) charToNSArray: (char*)value;  
  
+ (const char*) serializeErrorWithData:(NSString*)description code: (int) code;  
+ (const char*) serializeError:(NSError*)error;  
  
+ (NSMutableString*) serializeErrorWithDataToNSString:(NSString*)description code: (int) code;  
+ (NSMutableString*) serializeErrorToNSString:(NSError*)error;  
  
  
+ (const char*) NSStringsArrayToChar:(NSArray*) array;  
+ (NSString*) serializeNSStringsArray:(NSArray*) array;  
  
@end  