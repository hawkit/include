/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2;
-(void)service:(id)arg1 devicesChanged:(id)arg2;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
@end
