//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBOrderedRequesters : NSObject
{
    NSMutableArray *_bands[3];
}

- (id)description;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (_Bool)containsRequester:(id)arg1 inBand:(int)arg2;
- (id)requesters;
- (id)frontmostRequester;
- (void)dealloc;
- (id)init;

@end

