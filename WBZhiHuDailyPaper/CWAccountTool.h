//
//  CWAccountTool.h
//  WBZhiHuDailyPaper
//
//  Created by caowenbo on 15/12/30.
//  Copyright © 2015年 曹文博. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CWAccount.h"

@interface CWAccountTool : NSObject

+ (void)saveAccount:(CWAccount *)account;

+ (CWAccount *)account;

@end
