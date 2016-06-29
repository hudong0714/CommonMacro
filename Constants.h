//
//  Constants.h
//  BaseProject
//
//  Created by tarena on 14/12/16.
//  Copyright © 2015年. All rights reserved.
//
/**
 *  常用的宏
 */

#ifndef Constants_h
#define Constants_h

/**
 *  获取屏幕 宽度、高度
 */
#define kSCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define kSCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
//#define kSCALE [[UIScreen mainScreen] bounds].size.width/320 //适配
#define kWidth(R) R*(kSCREEN_WIDTH)/320
#define kHeight(R) R*(kSCREEN_HEIGHT)/568


/**
 *  状态栏、导航栏、标签栏高度
 */
#define kSTATUS_HEIGHT 20
#define kNAVIGATIONBAR_HEIGHT 44
#define kTABBAR_HEIGHT (self.tabBarController.tabBar.frame.size.height)

/**
 *  颜色  #define COLOR_FONT_RED   0xD54A45
 */

//随机色
#define kRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
//RGB颜色
#define UIColorFromRGB(rgbValue) [UIColor \colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
//RGBA颜色
#define UIColorFromRGBA(rgbValue) [UIColor \colorWithRed:((float)((rgbValue & 0xFF000000) >> 24))/255.0 \green:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \blue:((float)((rgbValue & 0xFF00) >> 8))/255.0 \alpha:((float)(rgbValue & 0xFF))/255.0]
//获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)
/**
 *  版本号
 */

//当前版本
#define CURRENT_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

/**
 *  文件目录
 */
#define kPathTemp NSTemporaryDirectory()
#define kPathDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kPathCache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]
/**
 *  图片
 */

//定义UIImage对象
#define LoadImage(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]
//定义UIImage对象
#define ImageNamed(_pointer) [UIImage imageNamed:_pointer]


/**
 *  其他
 */
//获取时间戳
#define kCurentTime [NSString stringWithFormat:@"%ld", (long)[[NSDate date] timeIntervalSince1970]]
//判断是否为空
#define isEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length]<1 ? YES : NO )
//弱引用
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
//userDefault
#define UserDefaults NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults]
#endif /* Constants_h */
