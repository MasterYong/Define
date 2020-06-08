//
//  UtilsMacros.h
//  YYApplication
//
//  Created by 杨世擎 on 2020/6/4.
//  Copyright © 2020 Master. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h
//-------------------------此文件禁止随意修改--------------//
//设备和系统
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_IOS_11  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.f)
#define IS_IOS_13  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 13.f)
#define IS_IPHONE_X \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

// 当前系统版本
#define CurrentSystemVersion [[UIDevice currentDevice].systemVersion doubleValue]
#define SoftwareVersion  [NSString stringWithFormat:@"%@",[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]] //软件版本
//appName
#define AppSoftwareName  [NSString stringWithFormat:@"%@",[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]] //软件名称

//获取系统对象
#define YApplication        [UIApplication sharedApplication]
#define YAppWindow          [UIApplication sharedApplication].windows[0]
#define YAppDelegate        [AppDelegate shareAppDelegate]
#define YRootViewController [UIApplication sharedApplication].windows[0].rootViewController
#define YUserDefaults       [NSUserDefaults standardUserDefaults]
#define YNotificationCenter [NSNotificationCenter defaultCenter]
//获取屏幕宽高
#define ScreenWidth ([[UIScreen mainScreen] bounds].size.width)
#define ScreenHeight [[UIScreen mainScreen] bounds].size.height
#define Screen_Bounds [UIScreen mainScreen].bounds
//状态栏高度
#define YStatusBarHeight \
({float statusBarHeight = 0;\
if (@available(iOS 13.0, *)) {\
UIStatusBarManager *statusBarManager = [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager;\
    statusBarHeight = statusBarManager.statusBarFrame.size.height;\
}else{statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height;}\
(statusBarHeight);})

#define YNavBarHeight 44.0
#define YTabBarHeight (YStatusBarHeight>20?83:49)
#define YNavHeight (YStatusBarHeight + YNavBarHeight)
#define YTabBarButtom_H        (IS_IPHONE_X ? 30.f : 0.f)
#define YWidth(w)  (ScreenWidth * w)/375

//强弱引用
#define WeakSelf(type)  __weak typeof(type) weak##type = type;
#define StrongSelf(type) __strong typeof(type) type = weak##type;

//DEBUG  模式下打印日志,当前行
#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

#define IMAGE_NAMED(name) [UIImage imageNamed:name]

//数据验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define SafeStr(f) (StrValid(f) ? f:@"")
#define HasString(str,key) ([str rangeOfString:key].location!=NSNotFound)
#define SAFE_STR(str) ((str)==nil||[str isKindOfClass:[NSNull class]]?@"":(str))
/**
 定义线程
 */
#define YYGlobalQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
#define YYMainQueue dispatch_get_main_queue()



#endif /* UtilsMacros_h */
