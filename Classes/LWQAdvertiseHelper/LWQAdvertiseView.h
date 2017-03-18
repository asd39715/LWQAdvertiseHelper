//
//  LWQAdvertiseView.h
//  test
//
//  Created by liwangqiang on 17/3/16.
//  Copyright © 2017年 liwangqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kAdscreenWidth [UIScreen mainScreen].bounds.size.width
#define kAdscreenHeight [UIScreen mainScreen].bounds.size.height
#define kAdMain_Screen_Bounds [[UIScreen mainScreen] bounds]
#define kAdUserDefaults [NSUserDefaults standardUserDefaults]

static NSString *const adImageName = @"adImageName";

@interface LWQAdvertiseView : UIView

/** 显示广告页面方法*/
- (void)show;
/** 图片路径*/
@property (nonatomic, copy) NSString *filePath;

@end
