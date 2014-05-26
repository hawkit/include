//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarTransitionInfo, UIView;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController
{
    UIView *_contextHostView;
    _Bool _zoomHostView;
    SBAppStatusBarTransitionInfo *_appStatusBarTransitionInfo;
    long long _animationTransition;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    _Bool _animationFinished;
    _Bool _fromSwitcher;
    _Bool _fromNC;
    _Bool _fromCC;
    _Bool _fromAssistant;
    UIView *_viewToAnimate;
}

@property(nonatomic) long long animationTransition; // @synthesize animationTransition=_animationTransition;
- (_Bool)_shouldWaitForSiriDismissBeforeZooming;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_noteZoomDidFinish;
- (void)_applicationDependencyStateChanged;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependency;
- (_Bool)_animationShouldStart;
- (void)cleanupZoom;
- (void)animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareZoom;
- (void)noteDependencyDidInvalidate;
- (double)animationDelay;
- (double)animationDuration;
- (void)animateFakeStatusBarWithParameters:(id)arg1;
- (id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(long long)arg2;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1;

@end

