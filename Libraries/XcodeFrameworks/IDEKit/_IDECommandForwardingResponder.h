/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEActionForwardingResponder.h>

#import "IDESelectionSource-Protocol.h"

@class IDESelection, IDEWorkspaceTabController;

@interface _IDECommandForwardingResponder : IDEActionForwardingResponder <IDESelectionSource>
{
    id <IDESelectionSource> _selectionSource;
}

@property(readonly) IDESelection *contextMenuSelection;
- (id)initWithSelectionSource:(id)arg1;
@property(readonly) IDESelection *outputSelection;
- (id)targetForAction:(SEL)arg1;
@property(readonly) IDEWorkspaceTabController *workspaceTabController;

@end

