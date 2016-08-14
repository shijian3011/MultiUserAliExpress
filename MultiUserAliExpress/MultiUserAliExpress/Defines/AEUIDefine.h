//
//  AEUIDefine.h
//  MultiUserAliExpress
//
//  Created by SHIJIAN on 16/8/14.
//  Copyright © 2016年 John Shi. All rights reserved.
//

#ifndef AEUIDefine_h
#define AEUIDefine_h


#define IOS7 ([[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )

#define IOS8_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define IOS9_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )

#define kFBaseY (64)

//导航栏的高度
#define kFBaseNavHeight 44
//状态栏的高度
#define kFBaseStatusHeight 20
//tabbar的高度
#define kFBaseTabBarHeight 49
//tabBar中间 无文字 按钮的高度
#define kFMaxTabBarHeight 62

//界面的宽
#define kFBaseWidth [[UIScreen mainScreen]bounds].size.width
//界面的高
#define kFBaseHeight [[UIScreen mainScreen]bounds].size.height
//没有状态条的高度
#define kFBaseHeightNoStatus (kFBaseHeight-kFBaseStatusHeight)
//没有状态条和导航栏的高度
#define kFBaseHeightNoStatusNoNav (kFBaseHeight-kFBaseStatusHeight - kFBaseNavHeight)
#define kFBaseHeightNoStatusNoNavNoTab (kFBaseHeight-kFBaseStatusHeight - kFBaseNavHeight -kFBaseTabBarHeight)

//判断设备型号
#define kIsIphone4Screen ([M2DeviceHelper isIphone4Screen])
#define kIsIphone5Screen ([M2DeviceHelper isIphone5Screen])
#define kIsIphone6Screen ([M2DeviceHelper isIphone6Screen])
#define kIsIphone6PlusScreen ([M2DeviceHelper isIphone6PlusScreen])
#define kIsIphoneSeries ([M2DeviceHelper isIphoneSeries])
#define kIsIpadSeries ([M2DeviceHelper isIpadSeries])


#endif /* AEUIDefine_h */
