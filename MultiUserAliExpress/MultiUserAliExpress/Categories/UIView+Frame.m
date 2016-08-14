//
//  UIView+Frame.m
//  MultiUserAliExpress
//
//  Created by SHIJIAN on 16/8/14.
//  Copyright © 2016年 John Shi. All rights reserved.
//

#import "UIView+Frame.h"

@implementation UIView (Frame)


- (CGFloat)x {
    return self.frame.origin.x;
}

- (void)setX:(CGFloat)x {
    CGRect rect = self.frame;
    rect.origin.x = x;
    self.frame = rect;
}

- (CGFloat)y {
    return self.frame.origin.y;
}

- (void)setY:(CGFloat)y {
    CGRect rect = self.frame;
    rect.origin.y = y;
    self.frame = rect;
}

- (CGFloat)width {
    return self.frame.size.width;
}

- (void)setWidth:(CGFloat)width {
    CGRect rect = self.frame;
    rect.size.width = width;
    self.frame = rect;
}

- (CGFloat)height {
    return self.frame.size.height;
}

- (void)setHeight:(CGFloat)height {
    CGRect rect = self.frame;
    rect.size.height = height;
    self.frame = rect;
}

- (CGSize)size {
    return self.frame.size;
}

- (void)setSize:(CGSize)size {
    CGRect rect = self.frame;
    rect.size = size;
    self.frame = rect;
}

- (CGPoint)origin {
    return self.frame.origin;
}

- (void)setOrigin:(CGPoint)origin {
    CGRect rect = self.frame;
    rect.origin = origin;
    self.frame = rect;
}

- (CGFloat)bottom {
    return self.y+self.height;
}

- (void)setBottom:(CGFloat)bottom {
    self.frame = CGRectMake(self.x, bottom - self.height, self.width, self.height);
}

- (CGFloat)right {
    return self.x + self.width;
}

- (void)setRight:(CGFloat)right {
    self.frame = CGRectMake(right - self.width, self.y, self.width, self.height);
}

//view转换成图片
- (UIImage*)convertViewToImage{
    UIGraphicsBeginImageContext(self.bounds.size);
    
    [self.layer renderInContext:UIGraphicsGetCurrentContext()];
    
    UIImage*image = UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return image;
}
//根据Xib文件创建View
+(id) createWithXib:(NSString *)xibName;
{
    if (!xibName) {
        id temp = [[[self class] alloc]init];
        return temp;
    }else{
        NSArray* nibView =  [[NSBundle mainBundle] loadNibNamed:xibName owner:nil options:nil];
        return [nibView objectAtIndex:0];
    }
}

//根据Xib文件创建View
+(id) createWithXib{
    NSString *className =NSStringFromClass([self class]);
    return [self createWithXib:className];
}

//
-(void) addSubVs:(UIView *)object, ... {
    va_list argp;
    va_start(argp, object);
    UIView * temObject = nil;
    temObject = object;
    while (temObject) {
        [self addSubview:temObject];
        temObject = va_arg(argp, UIView *);
    }
    va_end(argp);
}

@end
