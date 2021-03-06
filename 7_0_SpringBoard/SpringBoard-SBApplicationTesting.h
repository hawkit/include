//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpringBoard.h"

@interface SpringBoard (SBApplicationTesting)
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runScrollNotificationCenterTest:(id)arg1;
- (void)_runNotificationCenterBringupTest;
- (void)_runNotificationCenterDismissTest;
- (void)_runAppSliderBringupTest;
- (void)_runAppSliderDismissTest;
- (void)_runScrollAppSliderTest:(id)arg1;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runScrollIconListTest;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)runRotationTest:(int)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_cameraPreviewStarted;
- (void)_workspaceTransactionCompleted:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_runUnlockTest;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
@end

