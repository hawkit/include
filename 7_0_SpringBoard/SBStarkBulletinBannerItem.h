//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkBannerItem.h"

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem
{
    BBBulletin *_bulletin;
    SBUISound *_sound;
}

- (CDUnknownBlockType)subActionWithIndex:(unsigned long long)arg1;
- (id)subActionLabels;
- (id)sound;
- (CDUnknownBlockType)action;
- (_Bool)matchesContext:(id)arg1;
- (long long)actionType;
- (id)categoryImage;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)arg1;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1;

@end

