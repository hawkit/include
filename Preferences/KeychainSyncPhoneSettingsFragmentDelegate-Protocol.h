//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KeychainSyncCountryInfo, KeychainSyncPhoneSettingsFragment, NSString;

@protocol KeychainSyncPhoneSettingsFragmentDelegate <NSObject>
- (void)phoneSettingsFragment:(KeychainSyncPhoneSettingsFragment *)arg1 didChangePhoneNumber:(NSString *)arg2 countryInfo:(KeychainSyncCountryInfo *)arg3;
@end

