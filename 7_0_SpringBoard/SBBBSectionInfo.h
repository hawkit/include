//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBBItemInfo.h"

@class NSString, SBBulletinListSection;

@interface SBBBSectionInfo : SBBBItemInfo
{
    long long _sectionCategory;
}

- (id)identifier;
@property(readonly, nonatomic) NSString *listSectionIdentifier;
@property(readonly, nonatomic, getter=isWidgetSection) _Bool widgetSection;
@property(readonly, nonatomic) long long sectionCategory;
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;

@end

