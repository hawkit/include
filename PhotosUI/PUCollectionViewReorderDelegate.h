/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:03 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUCollectionViewReorderDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(/*^block*/ id)arg4;
@end

