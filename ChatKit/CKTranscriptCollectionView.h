//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView
{
    _Bool _ignoresContentOffsetChanges;
}

@property(nonatomic) _Bool ignoresContentOffsetChanges; // @synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges;
- (_Bool)isFastAnimationAvailableForContentOffset;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;

@end

