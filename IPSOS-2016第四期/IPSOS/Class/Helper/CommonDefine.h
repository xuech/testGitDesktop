//
//IOS开发中常用宏定义
//
////////////////////////////////////////////////////////////////////////////////

#define USER_DEFAULT [NSUserDefaults standardUserDefaults]

#define IMAGENAMED(NAME)   [UIImage imageNamed:NAME]

#pragma mark - 应用程序的名字
#define AppDisplayName [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"]

#pragma mark - 判断设备的操作系统是不是ios7
#define IOS7   (  [[[UIDevice currentDevice].systemVersion doubleValue] >= 7.0] )

#pragma mark - 判断当前设备是不是iPhone5
#define kScreenIphone5    (([[UIScreen mainScreen] bounds].size.height)>=568)

#pragma mark - 判断当前设备是不是Retina屏
#define isRetina ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960),[[UIScreen mainScreen] currentMode].size) : NO)

#pragma mark - 获取当前屏幕的高度
#define SCREEN_HEIGHT ([UIScreen mainScreen].applicationFrame.size.height)

#pragma mark - 获取当前屏幕的宽度
#define SCREEN_WIDTH  ([UIScreen mainScreen].applicationFrame.size.width)

#pragma mark - 获得RGB/RGBA颜色
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#pragma mark - viewWithTag 通过tag值获得子视图
#define VIEWWITHTAG(_OBJECT,_TAG) [_OBJECT viewWithTag : _TAG]

#pragma mark ---- 文件路径
#define PATH_OF_APP_HOME NSHomeDirectory()
#define PATH_OF_TEMP NSTemporaryDirectory()
#define PATH_OF_DOCUMENT [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

#define isEmptyOrNULL(string) (string== NULL|| string == nil|| [[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] isEqualToString:@""] || [string isEqual:[NSNull null]] || [string isEqualToString:@"<null>"])

#pragma mark - 单例
// @interface
#define singleton_interface(className) \
+ (className *)shared##className;

// @implementation
#define singleton_implementation(className) \
static className *_instance; \
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
+ (className *)shared##className \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
}



