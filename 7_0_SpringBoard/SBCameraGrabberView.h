//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBFVibrantView.h"

@class SBLegibilityView, _SBFVibrantSettings;

@interface SBCameraGrabberView : UIView <_SBFVibrantView>
{
    struct UIEdgeInsets _hitTestEdgeInsets;
    UIView *_colorCompositingView;
    UIView *_darkTintView;
    UIView *_lightTintView;
    UIView *_backgroundView;
    SBLegibilityView *_legibilityView;
    _SBFVibrantSettings *_vibrantSettings;
    id <SBResponderTouchDelegate> _delegate;
}

@property(nonatomic) id <SBResponderTouchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (id)_lazyLegibilityView;
- (void)setBackgroundView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_cameraGrabberImage;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

