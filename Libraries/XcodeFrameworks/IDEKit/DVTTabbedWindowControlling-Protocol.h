/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTTabbedWindowControlling <NSObject>
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1 andInvalidate:(BOOL)arg2;
- (void)_closeWindowIfNoTabs;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)adjustedFrameForSaving:(struct CGRect)arg1;
- (BOOL)canCloseSelectedTab;
- (BOOL)canCreateNewTab;
- (BOOL)canReceiveDragFromTabbedWindowControlling:(id)arg1;
- (void)cancelUpdateTabTitlesSoon;
- (BOOL)closeKeyEquivalentClosesTab;
- (void)closeOtherTabs:(id)arg1;
- (void)closeOtherTabsFromMenu:(id)arg1;
- (void)closeTab:(id)arg1;
- (void)closeTabFromMenu:(id)arg1;
- (void)closeTabOrWindow:(id)arg1;
- (id)createInactiveTab;
- (id)createInactiveTabWithFrameName:(id)arg1;
- (id)createTab;
- (id)createTabWithFrameName:(id)arg1;
- (id)createTabWithFrameName:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (id)createTabWithViewController:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (BOOL)isInFullScreenMode;
- (BOOL)isTabBarVisible;
- (void)moveTabFromOtherWindow:(id)arg1 toIndex:(unsigned long long)arg2 andShow:(BOOL)arg3;
- (void)moveTabToNewWindowFromMenu:(id)arg1;
- (void)newTab:(id)arg1;
- (id)orderedTabViewItems;
- (void)replaceEmptyTabWithTabs:(id)arg1;
- (void)selectTab:(id)arg1;
- (id)selectedTab;
- (unsigned long long)selectedTabIndex;
- (void)setTabBarVisible:(BOOL)arg1;
- (double)tabBarHeight;
- (id)tabBarView;
- (void)tabBarViewUpdateTabTitlesNow:(id)arg1;
- (void)tabBarViewUpdateTabTitlesSoon:(id)arg1;
- (void)toggleTabBar:(id)arg1;
@end

