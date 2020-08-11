//
//  MSUncaughtExceptionHandler.h
//  MSTool
//
//  Created by mls on 2020/8/11.
//  Copyright © 2020 mls. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSUncaughtExceptionHandler : NSObject

/*!
 *  异常的处理方法
 *
 *  @param install   是否开启捕获异常
 *  @param showAlert 是否在发生异常时弹出alertView
 */
+ (void)installUncaughtExceptionHandler:(BOOL)install
                              showAlert:(BOOL)showAlert;

@end

NS_ASSUME_NONNULL_END
