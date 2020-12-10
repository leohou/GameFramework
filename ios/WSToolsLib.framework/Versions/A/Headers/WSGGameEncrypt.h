//
//  WSPGameEncrypt.h
//
//  Created by lcyu on 2017/8/28.
//  Copyright © 2017年 you520t. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WSGGameEncrypt : NSObject
+ (NSString *)gameCenterAES256EncryptWithAESKey:(NSString *)key encryptString:(NSString *)encryptString;
+ (NSString *)gameCenterAES256DecryptWithAESKey:(NSString *)key decryptString:(NSString *)decryptString;
+ (NSString *)getSignatureWithAppDeviceID:(NSString *)appDeviceID Nonce:(int)nonce;
+ (NSString *)getSecretKeyWithClientID:(NSString *)clientID;
@end
