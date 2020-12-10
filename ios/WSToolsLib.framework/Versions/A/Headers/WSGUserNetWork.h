//
//  WSUUserNetWork.h
//  WSUserSDK
//
//  Created by houli on 2017/6/17.
//  Copyright © 2017年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WSSDKEncrypt.h"
#import "CommonDefine.h"
@interface WSGUserNetWork : NSObject<NSURLSessionTaskDelegate,NSURLSessionDelegate>

+(WSGUserNetWork *)sharedInstance;

+(NSString *)urlEncodeString:(NSString *)string;
+ (NSString *)parseParams:(NSDictionary *)params;

- (NSURLSessionDataTask *)post:(NSString *)URLString
                    parameters:(NSDictionary *)parameters
                       success:(SuccessBlock)success
                        notice:(OptionBlock)notice
                       failure:(FailureBlock)failure;

- (NSURLSessionDataTask *)postUploadImage:(NSString *)URLString
                    parameters:(NSDictionary *)parameters
                       success:(SuccessBlock)success
                        notice:(OptionBlock)notice
                       failure:(FailureBlock)failure;


//在线参数接口
- (NSURLSessionDataTask *)postConfig:(NSString *)URLString
                          parameters:(NSDictionary *)parameters
                             success:(SuccessBlock)success
                              notice:(OptionBlock)notice
                             failure:(FailureBlock)failure;
- (NSInteger)finalCodeWithResponseObject:(id)responseObject;

-(NSMutableDictionary *)globalRegistParmas;
- (NSString *) getGlobalHostUrl;
@end
