//
//  WSGConfigModel.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/4/12.
//  Copyright © 2018年 leohou. All rights reserved.
//
#import "JSONModel.h"
@interface WSGConfigModel : JSONModel
@property(nonatomic,strong) NSString *WS_APP_ID;
@property(nonatomic,strong) NSString *WS_APP_SECRET;
@property(nonatomic,strong) NSString *WS_CHANNEL_ID  ;
@property(nonatomic,strong) NSString *WS_WX_APP_ID;
@property(nonatomic,strong) NSString *WS_QQ_APP_ID;
@property(nonatomic,strong) NSString *WS_WX_APP_SECRET;
@property(nonatomic,strong) NSString *WS_ALI_APP_ID;
@property(nonatomic,strong) NSString *WS_CALL_BACK_URL;
@property(nonatomic,strong) NSString *WS_GAME_VER;
@property(nonatomic,strong) NSString *WS_AD_CODE;
@property(nonatomic,strong) NSString *WS_GAME_ID;
@property(nonatomic,strong) NSString *WS_Universal_Links;
+ (WSGConfigModel *)currentUser;








@end
