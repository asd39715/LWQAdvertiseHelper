//
//  LWQAdvertiseHelper.h
//  test
//
//  Created by liwangqiang on 17/3/16.
//  Copyright © 2017年 liwangqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LWQAdvertiseHelper : NSObject

+ (instancetype)sharedInstance;

+(void)showAdvertiserView:(NSArray *)imageArray
                 showTime:(int)showTime;

@end
