/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBFolderController.h"
#import "SBRootFolderView.h"
#import "SBRootFolder.h"

@interface SBRootFolderController : SBFolderController
{
}

- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (BOOL)_listIndexIsVisible:(unsigned int)arg1;
- (void)setDockVerticalStretch:(CGFloat)arg1;
- (void)setDockOffscreenFraction:(CGFloat)arg1;
- (id)dockListView;
- (BOOL)hasDock;
- (BOOL)isDisplayingIcon:(id)arg1;
- (void)setIdleText:(id)arg1;
- (BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2;
- (id)folderControllers;
- (unsigned int)_depth;
- (Class)_contentViewClass;

// Remaining properties
@property(readonly, nonatomic) SBRootFolderView *contentView;
@property(retain, nonatomic) SBRootFolder *folder;

@end

