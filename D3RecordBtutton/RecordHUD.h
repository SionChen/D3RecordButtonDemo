//
//  RecordHUD.h
//  D3RecordButtonDemo
//
//  Created by 超级腕电商 on 16/5/31.
//  Copyright © 2016年 super. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecordHUD : UIView{
    UIImageView *imgView;
    UILabel *titleLabel;
    UILabel *timeLabel;
}
@property (nonatomic, strong, readonly) UIWindow *overlayWindow;

+ (void)show;

+ (void)dismiss;

+ (void)setTitle:(NSString*)title;

+ (void)setTimeTitle:(NSString*)time;

+ (void)setImage:(NSString*)imgName;
@end
