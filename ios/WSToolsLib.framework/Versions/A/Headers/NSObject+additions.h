//
//  NSObject+additions.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/4/12.
//  Copyright © 2018年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (additions)
/**
 *  判断对象是否为空
 *  PS：nil、NSNil、@""、@0 以上4种返回YES
 *
 *  @return YES 为空  NO 为实例对象
 */
+ (BOOL)hl_isNullOrNilWithObject:(id)object;
@end
