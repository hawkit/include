//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFileLogger.h"

@interface SBWorkspaceLogger : SBFileLogger
{
}

+ (void)handleSignal;
+ (_Bool)saveRecentLogsToTemporaryPath:(id *)arg1;
+ (id)recentLogs;
+ (_Bool)isWorkspaceLoggingEnabled;
+ (int)workspaceLoggingType;
- (void)willBeginLoggingToPath:(id)arg1;
- (id)fileFormat:(id)arg1 withArguments:(char *)arg2;
- (_Bool)includeConsole;
- (void)reloadFromDefaults;
- (id)name;
- (_Bool)isEnabled;

@end

