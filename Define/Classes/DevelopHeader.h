//
//  DevelopHeader.h
//  YYApplication
//
//  Created by 杨世擎 on 2020/6/4.
//  Copyright © 2020 Master. All rights reserved.
//

#ifndef DevelopHeader_h
#define DevelopHeader_h

#define TOKEN [[NSUserDefaults standardUserDefaults] valueForKey:@"token"]//TOKEN
#define PlaceholderImage     [UIImage imageNamed:@"bookPicHold"]

typedef NS_ENUM(NSInteger, YYLoadDataState) {
    YYLoadDataNone    =  0,
    YYLoadDataNetData =  1 << 1,
    YYLoadDataDataBase=  1 << 2,
    YYLoadDataDefault = (YYLoadDataNetData|YYLoadDataDataBase),
};

static NSString * const YAppLaunchTimes = @"YAppLaunchTimes";
static NSString *const YNotificationNetWorkStateChange = @"YNotificationNetWorkStateChange";

#endif /* DevelopHeader_h */
