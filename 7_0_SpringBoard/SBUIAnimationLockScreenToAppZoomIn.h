//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBDisableAppStatusBarAlphaChangesAssertion, SBWindow, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBWindow *_transitionWindow;
    UIView *_viewToAnimate;
    UIView *_contextHostView;
    UIView *_fakeStatusBarViewContainer;
    long long _launchingOrientation;
    _Bool _requiresHostView;
    _Bool _activateBeforeHosting;
    _Bool _fromAssistant;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}

- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_finishedZooming;
- (void)_applicationDependencyStateChanged;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (void)_doAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependency;
- (_Bool)_animationShouldStart;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2;
- (id)_getTransitionWindow;

@end

