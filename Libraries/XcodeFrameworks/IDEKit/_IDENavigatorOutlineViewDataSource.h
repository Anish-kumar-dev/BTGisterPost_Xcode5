/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class IDENICFilterProxy, IDENavigatorOutlineView, NSArray, NSHashTable, NSMapTable;

@interface _IDENavigatorOutlineViewDataSource : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    IDENavigatorOutlineView *_outlineView;
    id _expandedItems;
    id _realObject;
    id _rootItems;
    id _filterProgressObserver;
    id _navigableItemGraphObserver;
    id _navigableItemPropertyObserver;
    id _forgottenNavigableItemsObserver;
    NSMapTable *_navItemChangeCountByItem;
    IDENICFilterProxy *_coordinatorFilteredItems;
    unsigned long long _numberOfRowsBeforeExpandOrCollapse;
    BOOL _didWarnForUnusualRowHeight;
    struct {
        unsigned int realDataSourceRespondsTo_child_ofItem:1;
        unsigned int realDataSourceRespondsTo_childItemsForItem:1;
        unsigned int realDataSourceRespondsTo_isItemExpandable:1;
        unsigned int realDataSourceRespondsTo_numberOfChildrenOfItem:1;
        unsigned int realDataSourceRespondsTo_objectValueForTableColumn_byItem:1;
        unsigned int realDataSourceRespondsTo_setObjectValue_forTableColumn_byItem:1;
        unsigned int realDelegateRespondsTo_willDisplayCell_forTableColumn_item:1;
        unsigned int realDelegateRespondsTo_selectionIndexesForProposedSelection:1;
        unsigned int realDelegateRespondsTo_dataCell_forTableColumn_item:1;
        unsigned int realDelegateRespondsTo_ItemDidExpand:1;
        unsigned int realDelegateRespondsTo_ItemDidCollapse:1;
        unsigned int realDelegateRespondsTo_heightOfRowByItem:1;
        unsigned int realDelegateRespondsTo_shouldShowOutlineCellForItem:1;
        unsigned int realDelegateRespondsTo_shouldShowOutlineCellForItemMouseHovering:1;
        unsigned int realDelegateRespondsTo_shouldExpandItem:1;
        unsigned int realDelegateRespondsTo_shouldCollapseItem:1;
        unsigned int realDelegateRespondsTo_outlineViewSelectionDidChange:1;
        unsigned int realDelegateRespondsTo_toolTipForCell:1;
        unsigned int realDelegateRespondsTo_isGroupHeaderItem:1;
        unsigned int realDelegateRespondsTo_shouldShowCellExpansion:1;
        unsigned int notifyingDelegateOfExpandOrCollapse:1;
        unsigned int clearingExpandedItems:1;
        unsigned int accessingChildItemsForItem:1;
        unsigned int tryWorkaroundForIsMajorGroupOn10_6;
        unsigned int _pad:8;
    } _idenovdsFlags;
}

- (void)_clearExpandedItems;
- (double)_outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)childItemsForItem:(id)arg1;
- (long long)countOfOutlineViewDataSourceRootItems;
@property(readonly) NSHashTable *expandedItems; // @synthesize expandedItems=_expandedItems;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithOutlineView:(id)arg1 realObject:(id)arg2;
- (BOOL)notifyingRealDelegateOfExpandOrCollapse;
- (id)objectInOutlineViewDataSourceRootItemsAtIndex:(long long)arg1;
@property(readonly) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)processNavigableItemDidForgetNotification:(id)arg1;
- (void)processNavigableItemGraphChangeNotification:(id)arg1;
@property(readonly) id realObject; // @synthesize realObject=_realObject;
- (void)refreshFilterPredicate;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(copy) NSArray *rootItems; // @synthesize rootItems=_rootItems;

@end

