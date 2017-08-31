//
//  DMProcessView.h
//  DMProcessDemo
//
//  Created by Damon on 2017/9/1.
//  Copyright © 2017年 damon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DMProcessView : UIView

//process
@property (nonatomic, assign)CGFloat process;

//show
+ (instancetype)showAddedTo:(UIView *)view;

//hide
- (void)hide;


@end
