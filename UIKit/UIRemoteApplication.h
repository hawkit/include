/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString* _machServiceName;
	unsigned _port;
}
-(id)initWithBundleIdentifier:(id)bundleIdentifier;
-(id)initWithMachServiceName:(id)machServiceName;
// inherited: -(void)dealloc;
-(void)updatePort;
-(void)hideTopMostMiniAlert:(int)alert;
-(void)showTopMostMiniAlert;
-(void)statusBarWillChangeOrientation:(int)statusBar duration:(CGFloat)duration __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)statusBarWillAnimateToHeight:(CGFloat)statusBar duration:(double)duration fence:(int)fence;
-(void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;
-(void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;
-(void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;
-(void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;
-(void)remoteNotificationMessageDelivered;
@end

