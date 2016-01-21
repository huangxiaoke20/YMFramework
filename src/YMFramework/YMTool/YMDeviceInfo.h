//
//  YMDeviceInfo.h
//  YuMiAssistant
//
//  Created by Tristen-MacBook on 14/9/11.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//判断iphone4
#define kYm_iPhone4Or4S ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

//判断iphone5
#define kYm_iPhone5Or5S ([[YMDeviceInfo deviceType] rangeOfString:@"iPhone 5"].length > 0 || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size))

//判断iphone6
#define kYm_iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) || [[YMDeviceInfo deviceType] isEqualToString:@"iPhone 6"]) : NO)

//判断iphone6+
#define kYm_iPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)


//判断iPhone6标准模式
#define kYm_iPhone6_standard (kYm_iPhone6 && [UIScreen mainScreen].nativeScale == [UIScreen mainScreen].scale)

//判断iPhone6放大模式
#define kYm_iPhone6_zoomed (kYm_iPhone6 && [UIScreen mainScreen].nativeScale > [UIScreen mainScreen].scale)

//判断iphone6+标准模式
#define kYm_iPhone6Plus_standard (kYm_iPhone6Plus && [[UIScreen mainScreen] bounds].size.height == 736.0)

//判断iphone6+放大模式
#define kYm_iPhone6Plus_zoomed (kYm_iPhone6Plus && [[UIScreen mainScreen] bounds].size.height == 667.0)




#define kYm_iPad [[UIDevice currentDevice].model rangeOfString:@"iPad"].location != NSNotFound

//判断ios8之后版本
#define kYm_iOS8OrLater ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

//判断ios9之后版本
#define kYm_iOS9OrLater ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

@interface YMDeviceInfo : NSObject

+ (float)systemVersion;

+ (NSString *)deviceType;

+ (NSString *)deviceVersion;

+ (NSString *)totalDiskSpace;

+ (NSString *)availableDiskSpace;

+ (NSString *)usedDiskSpace;

+ (double)diskSpaceUsedRate;

+ (NSString *)totalMemorySpace;

+ (double)availableMemorySpace;

+ (NSString *)usedMemorySpace;

+ (double)memorySpaceUsedRate;

+ (NSString *)language;

+ (NSString *)country;

+ (NSString *)newtworkType;

+ (BOOL)isJailBroken;


+ (NSString *)macString;

+ (NSString *)idfaString;

+ (NSString *)idfvString;

@end