//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBulletinActionHandler.h"
#import "SBWidgetViewControllerHostDelegate.h"

@class SBNotificationCenterViewController;

@protocol SBNotificationCenterViewControllerDelegate <SBWidgetViewControllerHostDelegate, SBBulletinActionHandler>

@optional
- (id <SBWidgetViewControllerHostDelegate>)widgetViewControllerHostDelegate:(SBNotificationCenterViewController *)arg1;
@end

