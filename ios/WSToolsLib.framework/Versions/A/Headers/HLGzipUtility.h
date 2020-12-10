//
//  HLGzipUtility.h
//  WeSaiDot
//
//  Created by 侯力 on 2019/10/8.
//  Copyright © 2019 侯力. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HLGzipUtility : NSObject

//压缩
- (NSData *)gzipDeflate:(NSString*)str;
//解压缩
- (NSData *)gzipInflate:(NSData*)data;
@end

NS_ASSUME_NONNULL_END
