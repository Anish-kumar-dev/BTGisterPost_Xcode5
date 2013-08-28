/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDispatchLock, DVTStackBacktrace, IDESourceControlBranch, IDESourceControlTreeItem, NSArray, NSMutableArray, NSString;

@interface IDESourceControlLog : NSObject <DVTInvalidation>
{
    NSMutableArray *_logRequests;
    DVTDispatchLock *_requestLock;
    DVTDispatchLock *_logItemsLock;
    NSMutableArray *_logItems;
    IDESourceControlTreeItem *_sourceTreeItem;
    IDESourceControlBranch *_branch;
    NSString *_lastRevisionLoaded;
    struct dispatch_queue_s *_queue;
    DVTStackBacktrace *_invalidationBacktrace;
    BOOL _isInvalidated;
    BOOL _moreAvailable;
    BOOL _groupByDay;
    BOOL _displayFilesChanged;
}

+ (id)logAspect;
- (id)_logItemForRevision:(id)arg1;
- (void)addLogRequest:(id)arg1;
- (void)arrangeLogEntries:(id)arg1;
@property IDESourceControlBranch *branch; // @synthesize branch=_branch;
- (void)cancelAllLogRequests;
- (void)clearLog;
- (id)createLogItemFromLogInfo:(id)arg1;
@property BOOL displayFilesChanged; // @synthesize displayFilesChanged=_displayFilesChanged;
@property BOOL groupByDay; // @synthesize groupByDay=_groupByDay;
- (id)init;
- (void)invalidate;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly) NSString *lastRevisionLoaded; // @synthesize lastRevisionLoaded=_lastRevisionLoaded;
- (void)loadLogItemsFromRevision:(id)arg1 completionBlock:(id)arg2;
- (void)logItemForRevision:(id)arg1 completionBlock:(id)arg2;
@property(readonly) NSArray *logItems; // @synthesize logItems=_logItems;
- (void)previousLogItemOfRevision:(id)arg1 completionBlock:(id)arg2;
- (void)removeLogRequest:(id)arg1;
@property IDESourceControlTreeItem *sourceTreeItem; // @synthesize sourceTreeItem=_sourceTreeItem;

@end

