//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBFloatyFolderView, SBFolderController, SBFolderIcon, SBFolderIconView, SBFolderZoomSettings, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}

- (struct CGRect)_zoomedFrame;
- (void)_animateToZoomFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupZoom;
- (void)_setZoomFraction:(double)arg1;
- (void)_prepareZoom;
- (void)dealloc;
- (id)initWithOuterController:(id)arg1 innerController:(id)arg2 folderIcon:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) SBFolderIcon *targetIcon;
@property(readonly, nonatomic) SBFolderIconView *targetIconView;
@property(retain, nonatomic) SBFolderZoomSettings *zoomSettings;

@end

