//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBPasscodeLockDisableAssertion : NSObject
{
    NSString *_identifier;
    int _type;
}

- (void)dealloc;
- (int)type;
- (id)description;
- (id)initWithIdentifier:(id)arg1 type:(int)arg2;

@end

