//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCollectionViewCell.h"

#import "SBUIBannerView.h"

@class SBBannerContextView, UIView;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView>
{
    SBBannerContextView *_contextView;
    UIView *_darkeningOverlayView;
}

- (id)bannerContext;
- (void)prepareForReuse;
- (void)_didSetHighlighted:(_Bool)arg1;
- (void)noteDidDismiss;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

