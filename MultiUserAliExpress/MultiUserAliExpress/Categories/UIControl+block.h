//
//  UIControl+block.h
//  ComicsIsland
//
//  Created by yangw on 14-5-30.
//  Copyright (c) 2014年 appfactory. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (block)

// default event is UIControlEventTouchUpInside
- (void)handleControlWithBlock:(void(^)(id sender))block;
- (void)handleControlEvent:(UIControlEvents)event withBlock:(void(^)(id sender))block;
- (void)removeHandlerForEvent:(UIControlEvents)event;
@end
