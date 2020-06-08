//
//  URLMacros.h
//  YYApplication
//
//  Created by 杨世擎 on 2020/6/4.
//  Copyright © 2020 Master. All rights reserved.
//

#ifndef URLMacros_h
#define URLMacros_h
#ifdef DEBUG
////**********测试*************
//#define MainInfoUrl @"https://m.api.tianxiaoshuo.com/"
#define MainInfoUrl @"http://csm.api.jrzw8.com/"

//#define MainInfoUrl @"https://m.api.shuduoduo888.com/"
//正式活动域名
#define MainHtml @"https://m.tianxiaoshuo.com/"

#else

//**********正式************
#define MainInfoUrl @"https://m.api.tianxiaoshuo.com/"
//正式活动域名
#define MainHtml @"https://m.tianxiaoshuo.com/"

#endif

#pragma mark - ——————— 详细接口地址 ————————
static NSString *const URL_Test = @"/api/cast/home/start";

#endif /* URLMacros_h */
