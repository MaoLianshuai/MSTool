//
//  MSDebugFPSButton.h
//
//
//  Created by MS on 2020/06/03.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 显示FPS帧数按钮
@interface MSDebugFPSButton : UIButton

/** 显示FPS */
+ (void)showFPSButton;
/** 隐藏FPS */
+ (void)hideFPSButton;
/** 查看FPS状态，YES 显示 */
+ (BOOL)isShow;

@end

NS_ASSUME_NONNULL_END
