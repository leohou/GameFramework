
//
//  CommonDefine.h
//  wstools
//
//  Created by houli on 2019/7/23.
//  Copyright © 2019 leohou. All rights reserved.
// 版本更新说明
//1.0.0版本
//1.0.1 版本号添加
//1.0.2 添加日志
//1.0.3 去掉runtime nav类
//1.0.4 增加配置文件配置基本必要参数
//1.0.6 增加iap
//1.0.7 设备唯一标识逻辑修改

#import <Foundation/Foundation.h>
typedef void (^SuccessBlock)(NSDictionary *data);
typedef void (^OptionBlock)(NSDictionary *data);
typedef void (^FailureBlock)(NSError *error);
typedef void(^CommonBlock)(void);
#define toolsVersion @"1.0.5"

#import "WSGAppSkin.h"
#import "WSGITTCommonMacros.h"
#import "Masonry.h"
#import "WSGAppSkin.h"
#import "NSMutableDictionary+WSUKit.h"
#import "WSGUserNetWork.h"
#import "IQKeyboardManager.h"
#import "WSToolAppManager.h"
#import "WSGReachability.h"
#import "UIDevice+Ext.h"
#import "NSMutableDictionary+WSUKit.h"
#import "WSGITTUtility.h"
#import "NSString+WSUFormat.h"
#import "UIColor+WSUHexColor.h"
#import "UIView+GestureRecognizer.h"
#import "UIImage+ImageScale.h"
#import "UIButton+Gradient.h"
#import "NSString+HLKit.h"
#import "WSSDKEncrypt.h"
#import "NSObject+additions.h"
#import "WSGConfigModel.h"
#import "WSGSSKeychain.h"
#import "WSGAnimationHelper.h"
#import "WSGMBProgressHUD.h"
#import "UIView+customView.h"
#import "UIView+ReuseIndentifier.h"
#import "YDDevice.h"
#import "LPScreenShotTool.h"
#import "WSGReachability.h"
#import "MMCheckTool.h"
#import "UIButton+WSUExtensions.h"
#import "UIView+WSUFrame.h"
#import "HLToolsMacro.h"
#import "UIView+AutoLayout.h"
#import "UIImageView+WebCache.h"
#import "FMDB.h"
#import "WHToast.h"
#import "HLGzipUtility.h"
#import "YUTimer.h"
#import "UIViewController+ADIOS13.h"
#import "FileManager.h"
#import "IapManager.h"
