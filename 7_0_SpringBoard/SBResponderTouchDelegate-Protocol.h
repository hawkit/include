//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent, UIResponder;

@protocol SBResponderTouchDelegate <NSObject>
- (void)responder:(UIResponder *)arg1 touchesCancelled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)responder:(UIResponder *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)responder:(UIResponder *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end

