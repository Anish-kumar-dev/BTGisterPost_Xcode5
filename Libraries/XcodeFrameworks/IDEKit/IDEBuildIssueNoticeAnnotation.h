/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueNoticeAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentNote;
}

+ (id)activeTheme;
+ (id)inactiveCurrentTheme;
+ (id)nonCurrentTheme;
+ (double)precedence;
+ (unsigned long long)severity;
+ (id)sidebarIcon;
- (id)annotationDisplayName;
- (id)currentStateInTextView:(id)arg1;
- (id)init;
@property BOOL isCurrentNote; // @synthesize isCurrentNote=_isCurrentNote;
- (BOOL)isHighlightedRangesVisible;

@end

