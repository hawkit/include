//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewCell.h"

#import "SBDateLabelDelegate.h"

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UILabel<SBBulletinDateLabel>, UIView;

@interface SBNotificationCell : _SBFVibrantTableViewCell <SBDateLabelDelegate>
{
    UIView *_realContentView;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondaryLabel;
    UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
    UILabel<SBBulletinDateLabel> *_eventDateLabel;
    UIButton *_actionButton;
    UIImageView *_attachmentView;
    struct CGSize _attachmentSize;
    _Bool _secondaryTextNumberOfLinesIsUpperBound;
    unsigned long long _secondaryTextNumberOfLines;
    double _secondaryTextHeight;
    UIImage *_icon;
}

+ (double)paddingBetweenTitleAndRelevanceDate;
+ (double)xInsetForOrientation:(long long)arg1;
+ (double)contentWidthWithRowWidth:(double)arg1 andAttachmentSize:(struct CGSize)arg2;
+ (void)setupEventDateLabel:(id)arg1;
+ (void)setupRelevanceDateLabel:(id)arg1;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForSubtitleText;
+ (id)defaultFontForPrimaryText;
+ (double)actionButtonPaddingLeft;
+ (double)iconPaddingLeft;
+ (double)primaryPaddingRight;
+ (double)primaryPaddingLeft;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) double secondaryTextHeight; // @synthesize secondaryTextHeight=_secondaryTextHeight;
@property(readonly, nonatomic) UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIView *iconView; // @synthesize iconView=_iconImageView;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) UIView *realContentView; // @synthesize realContentView=_realContentView;
@property(readonly, nonatomic) _Bool secondaryTextNumberOfLinesIsUpperBound; // @synthesize secondaryTextNumberOfLinesIsUpperBound=_secondaryTextNumberOfLinesIsUpperBound;
@property(readonly, nonatomic) unsigned long long secondaryTextNumberOfLines; // @synthesize secondaryTextNumberOfLines=_secondaryTextNumberOfLines;
- (void)layoutSubviews;
@property(nonatomic) double attachmentAlpha;
@property(nonatomic) double iconAlpha;
@property(nonatomic) double eventDateAlpha;
@property(nonatomic) double relevanceDateAlpha;
@property(nonatomic) double secondaryTextAlpha;
@property(nonatomic) double subtitleTextAlpha;
@property(nonatomic) double primaryTextAlpha;
- (void)setAttachmentImage:(id)arg1;
- (void)dateLabelDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *eventDateColor;
@property(retain, nonatomic) UIColor *relevanceDateColor;
- (void)setSecondaryTextNumberOfLines:(unsigned long long)arg1 treatAsUpperBound:(_Bool)arg2;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *subtitleTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *eventDateLabel;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *relevanceDateLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *primaryText;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentBounds;

@end

