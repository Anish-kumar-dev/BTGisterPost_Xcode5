/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEActivityReporter.h>

@class IDEActivityReport;

@interface IDEIndexerActivityReporter : IDEActivityReporter
{
    id <DVTObservingToken> _workspaceIndexObservingToken;
    id _willIndexWorkspaceNotificationObservingToken;
    id _isIndexingWorkspaceNotificationObservingToken;
    id _didIndexWorkspaceNotificationObservingToken;
    IDEActivityReport *_workspaceActivityReport;
}

+ (void)initialize;
- (void)cancelActivityReport;
- (id)initWithWorkspace:(id)arg1;
- (void)publishActivityReport;
- (void)setupIndexObserving;
- (void)updateActivityReport:(id)arg1;

@end

