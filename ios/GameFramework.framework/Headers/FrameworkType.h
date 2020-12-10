//
//  FrameworkType.h
//  GameFramework
//
//  Created by 侯力 on 2020/11/3.
//  Copyright © 2020 侯力. All rights reserved.
//

/*
 *  分享状态码
 */
typedef NS_ENUM (NSInteger, FaceBookShareStatus) {
    ShareSuccess           = 200,    /**< 分享成功    */
    ShareFail              = 3,    /**< 分享失败    */
    ShareFaceBookUninstall       = 2,    /**< 未安装facebook    */
    ShareCancel            = 1,    /**< 取消分享    */
};
/**
 * 分享类型
 */
typedef NS_ENUM(NSInteger, FaceBookShareType) {
    SHARE_URL = 1,  //分享链接url
    SHARE_IMGAGE = 2,   //图片分享
    SHARE_VIDEO = 3 ,   //分享视频
    SHARE_Hybrid = 4 ,   //混合分享
    
};
/**
 * 登录方式
 */
typedef NS_ENUM(NSInteger, LoginType) {
    GameLoginTypeVisitors = 3,   //游客
    GameLoginTypeFaceBook = 9,  //facebook
    GameLoginTypeApple = 10,  //apple
    
};
/*
 *  支付方式
 */
typedef NS_ENUM (NSInteger, GamePayType) {

    GamePayTypeIAP         = 4,
    
};
/**
 *  分享内容状态变更回调处理器
 */
typedef void(^ShareStateChangedHandler) ( FaceBookShareStatus state);

/**
 *  登录返回结果block
 */
typedef void(^ResultHandler) (id resultData);
