//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"

@class NSHashTable, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_0e61b686 _aggregatorData;
    int _aggregatorActions;
    CDStruct_0e61b686 _lastPost;
    unsigned long long _coalescentBlockDepth;
    _Bool _itemNeedsPost[25];
    _Bool _anyItemNeedsPost;
    _Bool _nonItemDataNeedsPost;
    _Bool _posting;
}

- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_0e61b686 *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const CDStruct_0e61b686 *)arg2;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const CDStruct_0e61b686 *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_0e61b686 *)arg1;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_0e61b686 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_0e61b686 *)arg3;
- (void)updateStatusBarItem:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)getStatusBarData:(CDStruct_0e61b686 *)arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

