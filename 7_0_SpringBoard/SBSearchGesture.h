//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class NSHashTable, SBSearchScrollView, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    _Bool _suppressObserverCallbacks;
    _Bool _animatingReset;
    _Bool _enabled;
    UIView *_targetView;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic, getter=isAnimatingReset) _Bool animatingReset; // @synthesize animatingReset=_animatingReset;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_displayLaunched:(id)arg1;
- (void)_openFolderChanged:(id)arg1;
- (void)_iconEditingStateChanged:(id)arg1;
- (void)_updateScrollingEnabled;
- (_Bool)_isShowingSearch;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)resetAnimated:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateForRotation;
- (void)dealloc;
- (id)init;

@end

