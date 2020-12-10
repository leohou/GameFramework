//
//  NSObject+JSONTool.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/7/17.
//  Copyright © 2018年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (JSONTool)
/**
 *  对象转换为JSONData
 *
 *  @return NSData
 */
- (nullable NSData *)JSONData;

/**
 *  对象转换为JSONString
 *
 *  @return NSString
 */
- (nullable NSString *)JSONString;

/**
 *  将JSONString转换为对象
 *
 *  @param jsonString json字符串
 *
 *  @return 对象
 */
+ (nullable id)objectFromJSONString:(nullable NSString *)jsonString;

/**
 *  将JSONString转换为对象
 *
 *  @param jsonString json字符串
 *
 *  @return 对象
 */
+ (nullable id)objectFromJSONData:(nullable NSData *)jsonData;


@end
