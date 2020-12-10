//
//  UIView+customView.h
//  doubleTableView
//
//  Created by tarena13 on 15/10/13.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (customView)

//+ (UIView *)viewWithLabelNumber:(NSInteger)num;
+ (UIView *)viewWithLabelNumber:(NSInteger)num withWidth:(NSInteger)width;
// 判断View是否显示在屏幕上
- (BOOL)isDisplayedInScreen;
@end
