//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKDispatchQueue : NSObject
{
    unsigned long long _fifo;
    _Bool _suspended;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    struct __CFBinaryHeap *_heap;
    NSMutableDictionary *_dispatchQueueBlocks;
}

+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;
+ (id)serialQueueWithDispatchPriority:(long long)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks; // @synthesize dispatchQueueBlocks=_dispatchQueueBlocks;
@property(retain, nonatomic) struct __CFBinaryHeap *heap; // @synthesize heap=_heap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)cancelOustandingBlocks;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (_Bool)containsOutstandingBlockForKey:(id)arg1;
- (id)allKeysOfOutstandingBlocks;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;
- (id)init;
- (void)dealloc;

@end

