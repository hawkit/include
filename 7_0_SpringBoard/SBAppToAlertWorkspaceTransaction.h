//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate.h"

@class BKSApplicationActivationAssertion, SBAlert, SBApplication, SBUIAnimationController;

@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBApplication *_topApplication;
    BKSApplicationActivationAssertion *_topApplicationActivationAssertion;
    _Bool _topApplicationSuppressesSpringBoardStatusBar;
    SBAlert *_activatingAlert;
    SBUIAnimationController *_animation;
    CDUnknownBlockType _alertActivationBlock;
    _Bool _animatedAppDeactivation;
    _Bool _suspendWorkspace;
}

@property(copy, nonatomic) CDUnknownBlockType alertActivationBlock; // @synthesize alertActivationBlock=_alertActivationBlock;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_transactionComplete;
- (_Bool)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (_Bool)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 alert:(id)arg3 overTopApplication:(id)arg4;

@end

