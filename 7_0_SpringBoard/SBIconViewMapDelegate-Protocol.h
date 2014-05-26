//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SBIcon, SBIconViewMap;

@protocol SBIconViewMapDelegate <NSObject>
- (int)viewMap:(SBIconViewMap *)arg1 locationForIcon:(SBIcon *)arg2;
- (unsigned long long)viewMap:(SBIconViewMap *)arg1 maxRecycledIconViewsOfClass:(Class)arg2;

@optional
- (unsigned long long)viewMap:(SBIconViewMap *)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (NSArray *)viewMapShouldPrepareViewsOfClasses:(SBIconViewMap *)arg1;
@end
