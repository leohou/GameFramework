//
//  GameSDK.h
//  iOSSDK
//
//  Created by 侯力 on 2020/10/22.
//  海外版1.1-facebooklogin

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FrameworkType.h"
#import "GameRequestModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface GameSDK : NSObject

+ (instancetype)shardInstance;

/**
 这个是放到AppDelegate里面，
 @param url 回调URL
 @param completion 处理完成的回调
 @return 返回值，返回NO则App自己处理
 */
+(BOOL)handleOpenURL:(NSURL *)url completion:(void(^)(void))completion;


#pragma mark 登录相关
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)handleApplication:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
+ (void)faceBookActivateApp;
/**
登录
 */
+ (void)login:(GameRequestModel *)model Completion:(ResultHandler)completion;
/**
 自动登录接口
 @param model 配置参数 WSGRequestMode 类型
 @param completion 登录完成的回调(成功和失败状态码)
 */
- (void)autoLogin:(GameRequestModel *)model Completion:(ResultHandler)completion;

#pragma mark 分享相关
/**
 facebook 分享
 */
+ (void)share:(GameRequestModel *)model Completion:(ShareStateChangedHandler)completion;

/**
 facebook 好友列表
 */
+ (NSString *)facebookUserList;


@end

NS_ASSUME_NONNULL_END
