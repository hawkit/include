//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBBulletinActionHandler.h"
#import "SBBulletinViewControllerDelegate.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBSizeObservingViewDelegate.h"

@class SBBulletinObserverViewController, SBChevronView, SBModeViewController, SBNotificationCenterSeparatorView, UIStatusBar, UIView, _UIBackdropView;

@interface SBNotificationCenterViewController : UIViewController <SBBulletinViewControllerDelegate, SBSizeObservingViewDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler>
{
    id <SBNotificationCenterViewControllerDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_coveredContentContainer;
    SBNotificationCenterSeparatorView *_bottomSeparator;
    SBModeViewController *_modeController;
    SBBulletinObserverViewController *_todayViewController;
    SBBulletinObserverViewController *_allModeViewController;
    SBBulletinObserverViewController *_missedModeViewController;
    UIStatusBar *_statusBar;
    SBChevronView *_grabberView;
    UIView *_grabberContentView;
    UIView *_grabberBackgroundView;
    SBChevronView *_registeredGrabberView;
    struct CGRect _grabberContentViewFrameForRegisteredGrabber;
    CDUnknownBlockType _registeredGrabberHideBlock;
    struct {
        unsigned int blursBackground:1;
        unsigned int showsBackground:1;
        unsigned int isBackgroundValid:1;
        unsigned int isGrabberEnabled:1;
        unsigned int isGrabberLockEngaged:1;
        unsigned int viewHitTestsAsOpaque:1;
        unsigned int isViewHitTestingValid:1;
    } _notificationCenterViewControllerFlags;
}

+ (id)_localizableTitleForBulletinViewControllerOfClass:(Class)arg1;
+ (id)grayControlInteractionTintColor;
@property(nonatomic) id <SBNotificationCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBChevronView *grabberView; // @synthesize grabberView=_grabberView;
- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3;
- (_Bool)handleActionForBulletin:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(nonatomic) id <SBWidgetViewControllerHostDelegate> widgetDelegate;
- (void)updateForChangeInMessagePrivacy;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)_setContainerFrame:(struct CGRect)arg1;
- (struct CGRect)_containerFrame;
@property(nonatomic) struct UIEdgeInsets clippingInsets;
@property(nonatomic) double contentViewAlpha;
- (void)dismissGrabberView;
- (void)presentGrabberView;
- (struct CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
- (struct CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (void)_setViewHitTestAsOpaque:(_Bool)arg1;
- (void)_reloadAllWidgets;
- (void)disableGrabberLock;
- (_Bool)isGrabberLocked;
@property(nonatomic, getter=isGrabberViewEnabled) _Bool grabberViewEnabled;
- (void)_configureGrabberForSoloMode:(_Bool)arg1;
- (id)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withHideBlock:(CDUnknownBlockType)arg2;
- (void)_register:(_Bool)arg1 grabberView:(id)arg2 withHideBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)revealRectForBulletin:(id)arg1;
@property(nonatomic, getter=isSuppressingNotificationUpdates) _Bool suppressesNotificationUpdates;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)_configureModeControllerView;
- (void)_loadBottomSeparator;
- (void)_loadGrabberContentView;
- (id)_newGrabberView;
- (void)_updateContrastSettingsForBottomSeparator;
- (void)_updateContrastSettingsForGrabberView;
- (void)_loadStatusBar;
- (void)_loadContentView;
- (void)_loadContainerView;
- (void)_loadClippingView;
- (void)_configureView;
@property(retain, nonatomic) UIView *coveredContentSnapshot;
- (void)_validateBackgroundViewIfNecessary;
@property(readonly, nonatomic) _UIBackdropView *backdropView;
@property(nonatomic) _Bool blursBackground;
@property(nonatomic) _Bool showsBackground;
- (id)_newBackgroundView;
- (void)_loadContentViewControllersForCurrentState;
- (id)_missedModeViewControllerCreateIfNecessary:(_Bool)arg1;
- (id)_allModeViewControllerCreateIfNecessary:(_Bool)arg1;
- (id)_todayViewControllerCreateIfNecessary:(_Bool)arg1;
- (id)_newBulletinObserverViewControllerOfClass:(Class)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

