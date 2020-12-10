//
//  GameRequestModel.h
//  GameFrameworkSourceCode
//
//  Created by 侯力 on 2020/11/3.
//  Copyright © 2020 侯力. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FrameworkType.h"
NS_ASSUME_NONNULL_BEGIN

@interface GameRequestModel : NSObject
@property(nonatomic,strong) NSString *name;     //帐号
@property(nonatomic,strong) NSString *mobile;   //手机号
@property(nonatomic,strong) NSString *validationCode; //验证码
@property(nonatomic,strong) NSString *password;       //密码 长度为6到16位由字母数字下划线组成且开头必须是字母长度为6到16位
@property(nonatomic,strong) NSString *passwordNew;       //新密码 长度为6到16位
@property(nonatomic,strong) NSString *repeatPassword;       //重复密码
@property(nonatomic,strong) NSString *token;       //自动登录使用
@property(nonatomic,assign) LoginType loginType;   //登录方式
@property(nonatomic,assign) FaceBookShareType shareType;   //分享类型
@property(nonatomic,strong) NSString *url;   //分享类型
@property(nonatomic,strong) NSString *ext_a;   //扩展字段
@property(nonatomic,assign) int acountType;   //账号登录方式 1 账号注册 2 账号登录 使用账号登录的时候必填项
@property(nonatomic,assign) int accountValidateType;   // 0 、1、 2
@property(nonatomic,strong) NSString *email;   // 邮箱

//获取配置信息使用以下字段
@property(nonatomic,strong) NSString *gameId;   //游戏id
@property(nonatomic,strong) NSString *packageId;   //游戏包名
@property(nonatomic,strong) NSString *versionCode; //版本号
@property(nonatomic,strong) NSString *card ; //身份证号

//靓号绑定使用字段
@property(nonatomic,strong) NSString * code;   //靓号绑定码
/**
 * 0 手机号验证码
 * 1 游戏内账号绑定
 private int bindType;
 */
@property(nonatomic,assign) int bindType;   //靓号绑定码

/**
 支付相关
 */
@property(nonatomic,strong) NSString *productId;            //商品id 必传字段
@property(nonatomic,strong) NSString *productCode;          //第三方商品id选传字段
@property(nonatomic,strong) NSString *userID;               //用户id 必传字段
@property(nonatomic,assign) GamePayType payMentType;         // 必传字段
@property(nonatomic,strong) NSString *phoneNumber;          //手机号 选填字段
@property(nonatomic,strong) NSString *passback;             //透传字段

@end

NS_ASSUME_NONNULL_END
