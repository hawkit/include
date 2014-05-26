//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBSizeObservingViewDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSArray, SBBulletinObserverViewController, SBModeControlManager, SBNotificationCenterSeparatorView, UIScrollView, UISwipeGestureRecognizer, UIView;

@interface SBModeViewController : UIViewController <SBSizeObservingViewDelegate, _UISettingsKeyPathObserver>
{
    id <SBBulletinActionHandler> _delegate;
    SBBulletinObserverViewController *_selectedViewController;
    UIScrollView *_contentView;
    UIView *_headerView;
    SBModeControlManager *_modeControl;
    UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    SBNotificationCenterSeparatorView *_separator;
    struct {
        unsigned int isContentLayoutValid:1;
        unsigned int isSegmentLayoutValid:1;
        unsigned int isRequestHandlingEnabled:1;
        unsigned int hasViewEverAppeared:1;
    } _modeViewControllerFlags;
}

+ (double)_minScreenDimension;
+ (id)_buttonTitleFont;
@property(nonatomic) id <SBBulletinActionHandler> delegate; // @synthesize delegate=_delegate;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)setWidgetDelegate:(id)arg1;
- (id)widgetDelegate;
- (_Bool)handleActionForBulletin:(id)arg1;
- (struct CGRect)rectForBulletin:(id)arg1;
@property(nonatomic, getter=isRequestHandlingEnabled) _Bool requestHandlingEnabled;
- (_Bool)_isRequestHandlingEnabled;
- (void)handleModeChange:(id)arg1;
@property(retain, nonatomic) NSArray *viewControllers;
@property(nonatomic) UIViewController *selectedViewController;
- (void)setSelectedViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_contentOffset:(struct CGPoint *)arg1 forChildViewController:(id)arg2;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (_Bool)_addBulletinObserverViewController:(id)arg1;
- (void)_setSelectedSegmentIndex:(long long)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)_invalidateSegmentLayout;
- (void)_invalidateContentLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_viewIfLoaded;
- (void)viewWillLayoutSubviews;
- (void)_layoutContentIfNecessary;
- (void)_setContentViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_layoutSegmentsIfNecessary;
- (void)_layoutHeaderViewIfNecessary;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_loadContentView;
- (id)_newSwipeGestureRecognizerWithDirection:(unsigned long long)arg1;
- (void)_loadHeaderView;
- (double)_headerViewHeightForMode:(long long)arg1;
- (struct CGRect)_modeControlFrameWithHeaderBounds:(struct CGRect)arg1 forMode:(long long)arg2;
- (struct CGSize)_modeControlSizeForMode:(long long)arg1;
- (long long)_layoutMode;
- (void)dealloc;

@end

