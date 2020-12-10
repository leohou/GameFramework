//
//  GameResultModel.h
//  GameFrameworkSourceCode
//
//  Created by 侯力 on 2020/11/5.
//  Copyright © 2020 侯力. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GameResultModel : NSObject
@property (nonatomic, strong) NSString * msg; // 提示信息
@property (nonatomic, assign) int code; // 状态码
@property (nonatomic, strong) NSString * data; // 返回信息
@end

NS_ASSUME_NONNULL_END
