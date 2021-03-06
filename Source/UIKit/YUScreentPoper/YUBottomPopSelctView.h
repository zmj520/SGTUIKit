//
//  YUBottomPopSelctView.h
//  YUANBAOAPP
//
//  Created by yxy on 14/11/20.
//  Copyright (c) 2014年 ATAW. All rights reserved.
//

#import <UIKit/UIKit.h>
#define YUSuccessStyle @"successStyle"
#define YUDefaultStyle @"defaultStyle"
#define YUCancelStyle @"cancelStyle"
#define YUDangerStyle @"DangerStyle"
typedef void(^_int_type_block)(int );

@class YUDIVView ;

@protocol YUBottomPopSelctViewDeledge  <NSObject>

-(void)whenSelectViewTouchUpInside:(int)row ;

@end

@interface YUBottomPopSelctView : UIView

@property(strong,nonatomic) YUDIVView * yMainDivView;

@property(weak,nonatomic)id<YUBottomPopSelctViewDeledge>deldge;

@property(strong,nonatomic) _int_type_block whenSelectViewTouchUpInside;

@property(strong,nonatomic) NSArray * yTitles;


-(void)ySetAutoSizeWithButtonTitles:(NSArray *)titles styles:(NSArray *)styles;


+(YUBottomPopSelctView *)share ;

@end

