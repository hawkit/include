//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController
{
    SBStarkScreenController *_starkScreenController;
}

@property(readonly, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (id)_getTransitionWindow;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 starkScreenController:(id)arg3;

@end

