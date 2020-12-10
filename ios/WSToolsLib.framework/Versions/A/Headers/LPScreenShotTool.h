//
//  LPScreenShotTool.h
//  WSUserSDK_Example
//
//  Created by houli on 2019/7/16.
//  Copyright © 2019 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LPScreenShotTool : NSObject
+ (instancetype) sharedScreenShot;
- (void)embedApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
@end

NS_ASSUME_NONNULL_END
