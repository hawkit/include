//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSString;

@interface SBWindowContextManager : NSObject
{
    id <SBWindowContextManagerDelegate> _delegate;
    NSString *_identifier;
    NSHashTable *_observers;
    NSMapTable *_screenToOrderedContexts;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) id <SBWindowContextManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)contextWithIdentifier:(unsigned int)arg1 screen:(id)arg2;
- (id)contextsForScreen:(id)arg1;
- (unsigned long long)numberOfContextsForScreen:(id)arg1;
- (id)trackedScreens;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (void)dealloc;

@end

