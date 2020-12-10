//
//  NSString+SubString.h
//  WSUserSDK_Example
//
//  Created by houli on 2018/5/14.
//  Copyright © 2018年 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SubString)
//计算字符串的字节数(汉字占两个)
- (int)getByteNum;

//从字符串中截取指定字节数
- (NSString *)subStringByByteWithIndex:(NSInteger)index; 
@end
