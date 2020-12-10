//
//  WSGAnimationHelper.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/1/18.
//  Copyright © 2018年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WSGAnimationHelper : NSObject
+ (void)wsPushView:(UIView *)pushView inView:(UIView *)inView;
+ (void)wsPopView:(UIView *)popView;

@end
