//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBUIBannerContext;

@protocol SBUIBannerTarget <NSObject>
@property(readonly, nonatomic) long long bannerTargetIdiom;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
@end

