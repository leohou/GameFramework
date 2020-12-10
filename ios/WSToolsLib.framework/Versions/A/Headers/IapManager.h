//
//  WSGPaManager.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/7/19.
//  Copyright © 2018年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>
// 苹果内购是否为沙盒测试账号,打开就代表为沙盒测试账号,注意上线时注释掉！！
#define APPSTORE_ASK_TO_BUY_IN_SANDBOX 1

typedef NS_ENUM(NSUInteger, PayMentFailDes) {
    PayMentFailNoCancelled,  //需要重试 获取支付信息
    PayMentFailNoProduct,  //没有拉取到APP STORE 商品信息
    PayMentFailVerifyFail,  //服务器验证收据失败
    PayMentFailUserCancelled,  //用户取消交易
    
    

};

extern NSString * const kPayMentFailDes;
extern NSString * const kCode;

typedef void(^IAPResultCompleteBlock)(BOOL success,NSDictionary *resultDic,NSString* base64String);

@interface IapManager : NSObject
+ (instancetype)sharedPayManager;

/// 苹果内购
- (void)requestAppleStoreProductDataWithString:(NSString *)productIdentifier IapResultComplete:(IAPResultCompleteBlock)iapResultComplete;
///// 验证苹果支付订单凭证
//- (void)checkAppStorePayResultWithBase64String:(NSString *)base64String;
- (void)removeobserver;
@end
