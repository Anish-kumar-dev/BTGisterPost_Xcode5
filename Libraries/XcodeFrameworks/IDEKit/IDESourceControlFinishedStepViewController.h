/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlRepositoryCreationStep.h>

@class NSString;

@interface IDESourceControlFinishedStepViewController : IDESourceControlRepositoryCreationStep
{
}

+ (id)defaultViewNibName;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)finishedImage;
@property(readonly) NSString *finishedString;
- (BOOL)hidePreviousButton;
- (id)identifier;
- (id)nextStepIdentifier;

@end

