//
//  FontColorMacros.h
//  YYApplication
//
//  Created by 杨世擎 on 2020/6/4.
//  Copyright © 2020 Master. All rights reserved.
//

#ifndef FontColorMacros_h
#define FontColorMacros_h
//-------------------------此文件禁止随意修改--------------//
//主题色 导航栏颜色
#define MainColor UIColorFromRGB(0x46B384)
//颜色
#define YClearColor [UIColor clearColor]
#define YWhiteColor [UIColor YYWhiteColor]
#define YBlackColor [UIColor YYBlackColor]
//分割线颜色
#define YLineColor [UIColor YYLineColor]
//主字色
#define YFontColor [UIColor YYFondColor]
//次级字色
#define YFontColor1 [UIColor colorWithRGB:0x999999]

// rgb颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromRGB_alpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

#pragma mark -  字体区
//常规字体设置
//**苹方中黑体*/
#define Font_Medium(value) [UIFont fontWithName:@"PingFangSC-Medium" size:value]
//**苹方细体*/
#define Font_Light(value) [UIFont fontWithName:@"PingFangSC-Light" size:value]
//**苹方中常规体*/
#define Font_Regular(value) [UIFont fontWithName:@"PingFangSC-Regular" size:value]
//**苹方粗体*/
#define Font_Semibold(value) [UIFont fontWithName:@"PingFangSC-Semibold" size:value]
//**苹方中粗体*/
#define Font_Bold(value) [UIFont fontWithName:@"PingFang-SC-Bold" size:value]

#define YFont Font_Regular(16)
#define YFont1 Font_Regular(13)

#endif /* FontColorMacros_h */
