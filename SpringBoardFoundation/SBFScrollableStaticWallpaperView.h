/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import "UIScrollViewDelegate.h"

@class SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, UIImageView, UIScrollView;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id <SBFCancelable> _cancelToken;
    UIColor *_averageColor;
}

@property(readonly) UIColor *averageColor; // @synthesize averageColor=_averageColor;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)wallpaperImage;
- (void)layoutSubviews;
- (struct CGRect)_cropRect;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (id)_wallpaperImageForAnalysis;
- (struct CGSize)_imageSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2;

@end

