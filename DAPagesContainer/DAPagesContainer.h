//
//  DAPageContainerScrollView.h
//  DAPagesContainerScrollView
//
//  Created by Daria Kopaliani on 5/29/13.
//  Copyright (c) 2013 Daria Kopaliani. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DAPagesContainer : UIViewController

@property (assign, nonatomic) NSUInteger selectedIndex;
@property (readonly) NSInteger viewControllersCount;
@property (assign, nonatomic) NSUInteger topBarHeight;
@property (assign, nonatomic) CGSize pageIndicatorViewSize;
@property (strong, nonatomic) UIColor *topBarBackgroundColor;
@property (strong, nonatomic) UIFont *topBarItemLabelsFont;
@property (strong, nonatomic) UIColor *pageItemsTitleColor;
@property (strong, nonatomic) UIColor *selectedPageItemColor;

- (void)setSelectedIndex:(NSUInteger)selectedIndex animated:(BOOL)animated;
- (void)updateLayoutForNewOrientation:(UIInterfaceOrientation)orientation;

-(void)addViewController:(id)vc;
-(void)removeViewControllerAtIndex:(NSInteger)idx;
@end