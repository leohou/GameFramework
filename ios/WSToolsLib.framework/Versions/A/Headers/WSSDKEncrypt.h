//
//  WSSDKEncrypt.h
//  WSUserSDK
//
//  Created by houli on 2017/7/19.
//  Copyright © 2017年 leohou. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <Security/Security.h>
#import "WSGGTMBase64.h"
#import <UIKit/UIKit.h>
@interface WSSDKEncrypt : NSObject

+ (NSString *) MD5Lower:(NSString *)string;

-(instancetype)initWithAppSecret:(NSString *)appSecret;

-(NSString *)getAES256Key:(NSString *)urlString;

-(NSString *)doEncryptStr:(NSString *)originalStr withUrlString:(NSString *)urlString;

-(NSString*)doDecEncryptStr:(NSString *)encryptStr withUrlString:(NSString *)urlString;

- (NSString *)AES256EncryptWithEncryptString:(NSString *)string withUrlString:(NSString *)urlString;
- (NSString *)AES256DecryptWithDecryptString:(NSString *)string withUrlString:(NSString *)urlString;
- (NSData *)AES256EncryptWithAESKey:(NSString *)key encryptData:(NSData *)data;
- (NSData *)AES256DecryptWithAESKey:(NSString *)key decryptData:(NSData *)data;

- (NSString *)gameCenterAES128EncryptWithEncryptString:(NSString *)string;

+ (NSString *)ShA256EncryptWithsrcString:(NSString *)srcString;


@end
