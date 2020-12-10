//
//  HLTimer.h
//  wstools_Example
//
//  Created by 侯力 on 2020/7/29.
//  Copyright © 2020 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HLTimer : NSObject

//创建timer block 方式
+ (NSString *)execTask:(void(^)(void))task start:(NSTimeInterval)start interval:(NSTimeInterval)interval repeats:(BOOL)repeats async:(BOOL)async;

+ (NSString *)execTask:(id)target selector:(SEL)selector start:(NSTimeInterval)start interval:(NSTimeInterval)interval repeats:(BOOL)repeats async:(BOOL)async;
//取消timer
+(void)cancelTask:(NSString *)name;
@end

NS_ASSUME_NONNULL_END
