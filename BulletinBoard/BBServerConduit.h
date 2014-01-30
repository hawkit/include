/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardServices/XPCProxyTarget.h>

@class BBServerConnection;

@interface BBServerConduit : NSObject <XPCProxyTarget> {

	BBServerConnection* _connection;

}
+(id)sharedConduit;
-(id)init;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/ id)arg2 ;
@end
