//
//  UIDevice+Ext.h
//  WSUserSDK_Example
//
//  Created by 侯力 on 2019/8/27.
//  Copyright © 2019 leohou. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (Ext)

/**
 *  获取当前手机版本
 */
- (NSString *)currentDeviceVersion;
/**
 *  获取当前手机机型
 */
- (NSString *)currentDeviceModel;
/**
 *  将手机型号代码转为手机型号
 */
- (NSString *)currentModel:(NSString *)phoneModel;
@end

NS_ASSUME_NONNULL_END
