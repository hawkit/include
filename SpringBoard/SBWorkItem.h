/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate;

@interface SBWorkItem : NSObject
{
    id _workBlock;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) id work; // @synthesize work=_workBlock;
- (void)dealloc;
- (id)initWithWork:(id)arg1;

@end

