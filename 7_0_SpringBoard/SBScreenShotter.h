//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBScreenShotter : NSObject
{
    _Bool _writingScreenshot;
}

+ (id)sharedInstance;
@property _Bool writingScreenshot; // @synthesize writingScreenshot=_writingScreenshot;
- (void)saveScreenshot:(_Bool)arg1;
- (void)finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void *)arg3;

@end

