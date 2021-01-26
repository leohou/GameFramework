//
//  GameSDK.h
//  iOSSDK
//
//  Created by 侯力 on 2020/10/22.
//  海外版1.0-facebooklogin
//  海外版1.1-支付相关

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

#pragma mark 支付相关的

/**
 * 获取商品列表
 * completion  回调 结果 以数组方式返回
 */
- (void)gameProductList:(GameRequestModel *)model Completion:(ResultHandler)completion;
/**
 * 获取商品信息
 * productId 商品id 必传
 * completion  回调 结果 以数组方式返回
 */
- (void)gameProductInfo:(GameRequestModel *)model Completion:(ResultHandler)completion;
/**
 *  支付统一下单接口
 * productid 商品id
 *
 * completion  回调 结果 字典方式返回
 */
- (void)gamePayUnifiedorder:(GameRequestModel *)model Completion:(ResultHandler)completion;
/**
 * productid 商品id
 * completion  回调 结果 字典方式返回
 */
//TODO
- (void)gamePayShow:(GameRequestModel *)model Completion:(ResultHandler)completion;

/**
 *  消费记录
 * completion  回调 结果 字典方式返回
 */
- (void)gamePayTracker:(GameRequestModel *)model Completion:(ResultHandler)completion;
/**
 *  红包对换记录
 * model   发红包需要的参数  model.userId用户id   model.record 查询个人 或者 全部 兑换记录
 * completion  回调 结果
 */
-(void)gameExchangeRecord:(GameRequestModel *)model Completion:(ResultHandler)completion;
@end

NS_ASSUME_NONNULL_END
