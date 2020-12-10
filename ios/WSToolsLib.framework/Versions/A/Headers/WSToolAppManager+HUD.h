//
//  WSToolAppManager+HUD.h
//  wstools_Example
//
//  Created by 侯力 on 2020/11/10.
//  Copyright © 2020 leohou. All rights reserved.
//

#import "WSToolAppManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface WSToolAppManager (HUD)
+ (void)dismissInfo:(id)title;
+ (void)dismissInfo:(id)title withWindow:(UIWindow *)window;
+ (void)dismissGlobalHUD;

+ (void)showGlobalProgressHUDWithTitle:(NSString *)title;
+ (void)showGlobalHUDWithTitle:(NSString *)title;
@end

NS_ASSUME_NONNULL_END
