//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, NSURL;

@protocol CKFileTransfer <NSObject>
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized;
@property(readonly, nonatomic) unsigned long long totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSString *guid;
@property(retain, nonatomic) id <CKMessage> message;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2;
- (id)initWithTransferGUID:(NSString *)arg1 message:(id <CKMessage>)arg2;
@end

