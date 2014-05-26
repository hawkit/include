//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBBSectionInfo.h"

@class SBBulletinListSection;

@interface SBNotificationsSectionInfo : SBBBSectionInfo
{
    CDUnknownBlockType _clearPossibleAction;
    CDUnknownBlockType _clearAction;
}

@property(copy, nonatomic) CDUnknownBlockType clearAction; // @synthesize clearAction=_clearAction;
@property(copy, nonatomic) CDUnknownBlockType clearPossibleAction; // @synthesize clearPossibleAction=_clearPossibleAction;
- (void)populateReusableView:(id)arg1;
- (_Bool)shouldSuppressBulletinMessageForPrivacy:(id)arg1;
- (double)heightForReusableViewInTableView:(id)arg1;
- (Class)reusableViewClass;
- (id)identifier;
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;
- (void)dealloc;

@end

