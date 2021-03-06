/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAssetContainer;
@class NSIndexPath, PUPhotoDecoration, UICollectionViewTransitionLayout;

@interface PUAlbumListTransitionContext : NSObject {

	BOOL _usesContentOffsetAutoAdjust;
	<PLAssetContainer>* _collection;
	NSIndexPath* _keyItemIndexPath;
	PUPhotoDecoration* _photoDecoration;
	UICollectionViewTransitionLayout* _transitionLayout;

}

@property (nonatomic,retain) <PLAssetContainer> * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyItemIndexPath;                                   //@synthesize keyItemIndexPath=_keyItemIndexPath - In the implementation block
@property (nonatomic,retain) PUPhotoDecoration * photoDecoration;                              //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) BOOL usesContentOffsetAutoAdjust;                                 //@synthesize usesContentOffsetAutoAdjust=_usesContentOffsetAutoAdjust - In the implementation block
@property (nonatomic,retain) UICollectionViewTransitionLayout * transitionLayout;              //@synthesize transitionLayout=_transitionLayout - In the implementation block
-(id)collection;
-(id)transitionLayout;
-(void)setPhotoDecoration:(id)arg1 ;
-(id)keyItemIndexPath;
-(BOOL)usesContentOffsetAutoAdjust;
-(id)photoDecoration;
-(void)setUsesContentOffsetAutoAdjust:(BOOL)arg1 ;
-(void)setTransitionLayout:(id)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)setKeyItemIndexPath:(id)arg1 ;
-(void).cxx_destruct;
@end

