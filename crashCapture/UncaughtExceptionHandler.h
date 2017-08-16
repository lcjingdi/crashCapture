//
//  UncaughtExceptionHandler.h
//  testCrash
//
//  Created by jingdi on 2017/8/16.
//  Copyright © 2017年 lcjingdi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UncaughtExceptionHandler : NSObject {
    BOOL dismissed;
}

@end

void HandleException(NSException *exception);
void SignalHandler(int signal);
void InstallUncaughtExceptionHandler(void);
