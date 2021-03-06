/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUAbstractTransitionLayoutAttributes.h>

@class UICollectionViewLayoutAttributes;

@interface PUExtrapolatingLayoutAttributes : PUAbstractTransitionLayoutAttributes {

	UICollectionViewLayoutAttributes* _fromLayoutAttributes;

}

@property (setter=_setFromLayoutAttributes:,getter=_fromLayoutAttributes,nonatomic,retain) UICollectionViewLayoutAttributes * fromLayoutAttributes;              //@synthesize fromLayoutAttributes=_fromLayoutAttributes - In the implementation block
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 ;
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 extrapolatedFromLayoutAttributes:(id)arg2 ;
-(void)updateForProgress;
-(id)_fromLayoutAttributes;
-(id)dynamicAnimationsAtVelocity:(double)arg1 ;
-(void)finishInterpolation;
-(void)_setFromLayoutAttributes:(id)arg1 ;
-(void).cxx_destruct;
@end

