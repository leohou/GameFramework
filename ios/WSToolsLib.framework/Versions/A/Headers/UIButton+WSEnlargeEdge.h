//
//  UIButton+WSEnlargeEdge.h
//  WeSaiModADSDK_Example
//
//  Created by 侯力 on 2020/4/10.
//  Copyright © 2020 leohou. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (WSEnlargeEdge)
/**
 增大点击区域
 @param size 上左下右的增大量
 */
- (void)be_setEnlargeEdge:(CGFloat)size;

/**
 增大点击区域
 @param size 上左下右的增大量
 */
- (void)be_setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

@end

NS_ASSUME_NONNULL_END
