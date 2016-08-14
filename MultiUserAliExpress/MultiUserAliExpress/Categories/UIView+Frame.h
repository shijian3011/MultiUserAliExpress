//
//  UIView+Frame.h
//  MultiUserAliExpress
//
//  Created by SHIJIAN on 16/8/14.
//  Copyright © 2016年 John Shi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property (nonatomic, readwrite) CGFloat x;
@property (nonatomic, readwrite) CGFloat y;
@property (nonatomic, readwrite) CGFloat width;
@property (nonatomic, readwrite) CGFloat height;
@property (nonatomic, readwrite) CGSize size;
@property (nonatomic, readwrite) CGPoint origin;
@property (nonatomic, readwrite) CGFloat bottom;
@property (nonatomic, readwrite) CGFloat right;

//view转换成图片
- (UIImage*)convertViewToImage;
//根据Xib文件创建View
+(id) createWithXib:(NSString *)xibName;
//根据Xib文件创建View
+(id) createWithXib;
//用于添加多个子View加到本View里
-(void) addSubVs:(UIView *)object, ...;

@end
