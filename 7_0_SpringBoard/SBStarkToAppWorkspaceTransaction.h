//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

@class SBApplication;

@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    SBApplication *_toApp;
    _Bool _fromAssistant;
}

@property(readonly, nonatomic) SBApplication *toApp; // @synthesize toApp=_toApp;
- (void)_transactionComplete;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 to:(id)arg4;

@end
