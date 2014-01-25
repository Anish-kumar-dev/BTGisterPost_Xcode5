/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPathCellDelegate-Protocol.h"

@protocol IDEPathCellDelegate <NSPathCellDelegate>

@optional
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldPopUpMenuForPathComponentCell:(id)arg2 item:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (id)pathCell:(id)arg1 toolTipForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCellNoSelectionTitle;
@end

