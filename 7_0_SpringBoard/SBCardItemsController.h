//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBCardItemsControllerRemoteInterface.h"
#import "XPCProxyTarget.h"

@class NSMutableArray, NSMutableDictionary;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, XPCProxyTarget>
{
    NSMutableArray *_remoteControllers;
    NSMutableDictionary *_cardItems;
}

- (void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearCardItemsForControllerWithIdentifier:(id)arg1;
- (void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)_activateAllCardItems;
- (void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)_addControllerWithConnection:(id)arg1;
- (void)dealloc;
- (id)init;

@end

