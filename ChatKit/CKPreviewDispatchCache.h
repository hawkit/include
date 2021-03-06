//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSystemMonitorListener.h"

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>
{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

@property(retain, nonatomic) CKMultiDict *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(retain, nonatomic) CKDispatchCache *dispatchCache; // @synthesize dispatchCache=_dispatchCache;
- (void)transferRemoved:(id)arg1;
- (void)transferFinished:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)flush;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidSuspend;
- (id)notificationCenter;
- (id)mediaObjectManager;
- (void)resume;
- (void)endGeneratingForMediaObject:(id)arg1 orientation:(BOOL)arg2;
- (void)beginGeneratingForMediaObject:(id)arg1 orientation:(BOOL)arg2;
- (_Bool)isGeneratingForMediaObject:(id)arg1 orientation:(BOOL)arg2;
- (void)setCachedPreview:(id)arg1 forMediaObject:(id)arg2 orientation:(BOOL)arg3;
- (id)cachedPreviewForMediaObject:(id)arg1 orientation:(BOOL)arg2;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(long long)arg3 forMediaObject:(id)arg4 orientation:(BOOL)arg5;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;
- (id)init;
- (void)dealloc;

@end

