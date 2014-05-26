//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont;

@interface SBSearchTableViewContentSizeCache : NSObject
{
    UIFont *_bodyFont;
    UIFont *_caption1Font;
    UIFont *_boldCaption1Font;
    UIFont *_footnoteFont;
    double _baseHeight;
    double _footnoteFontLineHeight;
    double _footnoteFontAscender;
    double _bodyFontLineHeight;
    double _bodyFontAscender;
    double _caption1FontLineHeight;
    double _caption1FontAscender;
    double _emphasizedCaption1FontLineHeight;
    double _emphasizedCaption1FontAscender;
    double _summaryLineHeight;
}

+ (id)sharedInstance;
@property(nonatomic) double summaryLineHeight; // @synthesize summaryLineHeight=_summaryLineHeight;
@property(nonatomic) double emphasizedCaption1FontAscender; // @synthesize emphasizedCaption1FontAscender=_emphasizedCaption1FontAscender;
@property(nonatomic) double emphasizedCaption1FontLineHeight; // @synthesize emphasizedCaption1FontLineHeight=_emphasizedCaption1FontLineHeight;
@property(nonatomic) double caption1FontAscender; // @synthesize caption1FontAscender=_caption1FontAscender;
@property(nonatomic) double caption1FontLineHeight; // @synthesize caption1FontLineHeight=_caption1FontLineHeight;
@property(nonatomic) double bodyFontAscender; // @synthesize bodyFontAscender=_bodyFontAscender;
@property(nonatomic) double bodyFontLineHeight; // @synthesize bodyFontLineHeight=_bodyFontLineHeight;
@property(nonatomic) double footnoteFontAscender; // @synthesize footnoteFontAscender=_footnoteFontAscender;
@property(nonatomic) double footnoteFontLineHeight; // @synthesize footnoteFontLineHeight=_footnoteFontLineHeight;
@property(nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(retain, nonatomic) UIFont *footnoteFont; // @synthesize footnoteFont=_footnoteFont;
@property(retain, nonatomic) UIFont *boldCaption1Font; // @synthesize boldCaption1Font=_boldCaption1Font;
@property(retain, nonatomic) UIFont *caption1Font; // @synthesize caption1Font=_caption1Font;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
- (void)contentSizeDidChange;

@end

