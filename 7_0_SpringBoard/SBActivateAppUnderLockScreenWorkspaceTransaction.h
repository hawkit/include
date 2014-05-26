//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (_Bool)selfApplicationExited:(id)arg1;
- (_Bool)selfApplicationLaunchDidFail:(id)arg1;
- (_Bool)selfWorkspaceDidResume;
- (void)_suspendWorkspaceIfNecessary;
- (_Bool)_shouldWorkspaceBeSuspended;
- (_Bool)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (_Bool)selfApplicationActivated:(id)arg1;
- (_Bool)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (void)_alertDidActivate;
- (void)_handleAppActivationFailure;
- (void)_setupAndActivate;
- (void)_transactionComplete;
- (void)_commit;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldToggleSpringBoardStatusBarOnCleanup;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3 lockScreenController:(id)arg4 activationHandler:(CDUnknownBlockType)arg5;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3 lockScreenController:(id)arg4;

@end

