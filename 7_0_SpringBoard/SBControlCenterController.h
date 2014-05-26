//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBControlCenterViewControllerDelegate.h"

@class NSHashTable, NSMutableSet, SBApplication, SBChevronView, SBControlCenterRootView, SBControlCenterViewController, SBControlCenterWindow, UIView, _UIBackdropView;

@interface SBControlCenterController : UIViewController <SBControlCenterViewControllerDelegate>
{
    SBControlCenterWindow *_window;
    SBControlCenterRootView *_rootView;
    SBControlCenterViewController *_viewController;
    UIView *_fullScreenGrabberContainer;
    _UIBackdropView *_fullScreenGrabberBackdrop;
    SBChevronView *_fullScreenChevron;
    NSMutableSet *_preventDismissalOnLockReasons;
    _Bool _uiLocked;
    NSHashTable *_observers;
    long long _orientation;
    _Bool _animatingInitialPresentation;
    _Bool _gotFirstBackdropUpdate;
    _Bool _inGrabberOnlyMode;
    _Bool _presented;
    _Bool _transitioning;
    _Bool _fullyRevealed;
    SBApplication *_coveredApplication;
}

+ (void)notifyControlCenterControl:(id)arg1 didActivate:(_Bool)arg2;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreatingIfNeeded:(_Bool)arg1;
@property(nonatomic, getter=isFullyRevealed) _Bool fullyRevealed; // @synthesize fullyRevealed=_fullyRevealed;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) SBApplication *coveredApplication; // @synthesize coveredApplication=_coveredApplication;
@property(nonatomic) _Bool inGrabberOnlyMode; // @synthesize inGrabberOnlyMode=_inGrabberOnlyMode;
@property(nonatomic, getter=isUILocked) _Bool UILocked; // @synthesize UILocked=_uiLocked;
- (void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2;
- (void)controlCenterViewController:(id)arg1 handlePan:(id)arg2;
- (void)controlCenterViewController:(id)arg1 handleTap:(id)arg2;
- (_Bool)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2;
- (void)controlCenterViewControllerWantsDismissal:(id)arg1;
- (void)_finishPresenting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissWithDuration:(double)arg1 additionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAnimated:(_Bool)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_presentWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideGrabberAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideGrabberAnimated:(_Bool)arg1;
- (void)showGrabberAnimated:(_Bool)arg1;
- (void)cancelTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createDynamicAnimationForShow:(_Bool)arg1 currentValue:(double)arg2 velocity:(double)arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginTransitionWithTouchLocation:(struct CGPoint)arg1;
- (void)_endPresentation;
- (void)_beginPresentation;
- (_Bool)allowHideTransition;
- (_Bool)allowShowTransition;
- (_Bool)_allowsShowTransition;
- (void)_setNCGrabberHidden:(_Bool)arg1;
- (void)_updateGrabberVisibility;
- (void)_updateRevealPercentage:(double)arg1;
- (void)_revealSlidingViewToHeight:(double)arg1;
- (double)_controlCenterHeightForTouchLocation:(struct CGPoint)arg1;
- (double)_yValueForClosed;
- (double)_yValueForOpen;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (id)_window;
- (void)preventDismissalOnLock:(_Bool)arg1 forReason:(id)arg2;
- (void)_dismissOnLock;
- (void)_uiRelockedNotification:(id)arg1;
- (void)_lockStateChangedNotification:(id)arg1;
- (_Bool)isGrabberVisible;
- (_Bool)isVisible;
- (void)loadView;
- (_Bool)handleMenuButtonTap;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_enumerateObservers:(CDUnknownBlockType)arg1;
- (_Bool)isAvailableWhileLocked;
- (void)dealloc;
- (id)init;

@end

