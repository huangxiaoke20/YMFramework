//
//  UIWebView+YMAdditions.m
//  YMFramework
//
//  Created by 涛 陈 on 5/14/15.
//  Copyright (c) 2015 cornapp. All rights reserved.
//

#import "UIWebView+YMAdditions.h"
#import "NSString+YMAdditions.h"

@implementation UIWebView (YMAdditions)

- (NSString *)fetchHtmlNormalTitle;
{
    NSString *title = @"";
    
    NSString *normalTitle = [self stringByEvaluatingJavaScriptFromString:@"document.getElementsByTagName('title')[0].text"];
    if ([NSString isContainString:normalTitle]) {
        title = normalTitle;
    }
    
    return [title trim];
}

@end
