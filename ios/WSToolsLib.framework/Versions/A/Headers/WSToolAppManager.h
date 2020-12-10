//
//  WSToolAppManager.h
//  wstools_Example
//
//  Created by 侯力 on 2020/7/2.
//  Copyright © 2020 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 判断是否为iPhone X 系列  这样写消除了在Xcode10上的警告。
#define IPHONE_X \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})


/**
 *导航栏高度
 */
#define SafeAreaTopHeight (IPHONE_X ? 88 : 64)

/**
 *tabbar高度
 */
#define SafeAreaBottomHeight (IPHONE_X ? (49 + 34) : 49)


#define kPath [[NSString stringWithFormat:@"%s", __FILE__].lastPathComponent UTF8String]
#define kFun  __FUNCTION__
#define kLine  __LINE__
@interface WSToolAppManager : NSObject
@property (nonatomic, assign) BOOL debug; /**< 设置打印日志 */
@property (nonatomic, strong) NSString *wstelephone; /**< 设置电话 */
@property (nonatomic, strong) NSString *hostUrl; /**< 设置接口地址 */
@property (nonatomic, strong) NSString *port; /**< 设置接口地址端口号 */
@property (nonatomic, strong) NSString *gameVer; /**< 设置游戏版本号 */
@property (nonatomic, strong) NSString *isLandscape; /**< 是否横屏 1 横屏  2 竖屏   */
@property (nonatomic, assign) BOOL isHavePlistKey; /**< 是否有配置文件   */
+ (WSToolAppManager *)sharedInstance;
/**
 获取sdk 版本号
 */
+ (NSString *)getSDKVersion;
/**
 获取IDFV
 */
+ (NSString *)getIDFV;
/**
 获取BundleIdVersion
 */
+ (NSString *)getBundleVersion;
/**
 获取IDFA
 */
+ (NSString *)getIDFA;
/**
 获取uuid
 */
+ (NSString *)getUUID;
/**
 获取BuildId
 */
+ (NSString *)getBuildId;
/*!
 * @brief 把格式化的JSON格式的字符串转换成字典
 * NSDictionary JSON格式的字符串
 * @return 返回字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
/*!
 * @brief 把字典转换成json
 * NSString JSON格式的字符串
 * @return 返回jsonString JSON格式的字符串
 */
+ (NSString*)dictionaryToJson:(NSDictionary *)dic;
/*!
 * @brief 把对象转换成json
 * NSString JSON格式的字符串
 * @return 返回jsonString JSON格式的字符串
 */
+(NSString*)ObjectTojsonString:(id)object;
/*!
 * @brief 获取app的设备方向
 * @return NSArray 结构体
 */
+ (NSArray *)getSupportedInterfaceOrientations;

/*!
 * @brief 字符串转日期
 * @return NSDate
 */
+ (NSDate *)StringTODate:(NSString *)sender;

/*!
 * @brief 日期转换字符串
 * @return NSDate
 */
+ (NSString *)DateTOString:(NSDate *)sender;

/*!
 * @brief 数组转字符串
 * @return NSString
 */
+ (NSString *)arrayToJSONString:(NSArray *)array;

/*!
 * @brief 金额转字符串
 * @return NSString
 */
+ (NSString *)getBalance:(NSInteger)balance;

/**
 *  调整图片尺寸和大小
 *
 *  @param sourceImage  原始图片
 *  @param imageSize    新图片 固定的尺寸
 *  @param maxSize      新图片最大存储大小
 *
 *  @return 新图片imageData
 */
+ (NSData *)reSizeImageData:(UIImage *)sourceImage maxImageSize:(CGSize)imageSize maxSizeWithKB:(CGFloat)maxSize;

/*!
 * @brief 跳转到浏览器
 * @return NSString
 */
+ (void)clickGoToSafari:(NSString *)url;

/*!
 * @brief 获取新建窗口
 * @return NSString
 */
+ (UIWindow *)showWindow;

/*!
 * @brief 当前设备版本信息
 * @return NSString
 */
+ (NSString *)currentDeviceVersion;

/*!
 * @brief 当前设备型号
 * @return NSString
 */
+ (NSString *)currentDeviceModel;

/**
 校验身份证号码是否正确 返回BOOL值
 
 @param idCardString 身份证号码
 @return 返回BOOL值 YES or NO
 */
+ (BOOL)cly_verifyIDCardString:(NSString *)idCardString;

/**
  日志打印
 @param title
 */
+(void)logEnableContent:(id)obj withFunction:(nullable char *)funtion withLine:(NSInteger)lineStr;

/**
 *导航栏高度
 */
+ (NSInteger)getSafeAreaTopHeight;

/**
 *tabbar高度
 */
+ (NSInteger)getSafeAreaBottomHeight;

+ (void)showGlobalHUDWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
