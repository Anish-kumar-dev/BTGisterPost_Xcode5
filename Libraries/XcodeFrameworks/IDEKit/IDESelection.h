/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface IDESelection : NSObject <NSCopying>
{
    NSArray *_navigableItemArchivableRepresentations;
}

+ (id)selectionWithNavigableItemArchivableRepresentations:(id)arg1;
+ (id)selectionWithNavigableItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithNavigableItemArchivableRepresentations:(id)arg1;
@property(readonly) NSArray *navigableItemArchivableRepresentations; // @synthesize navigableItemArchivableRepresentations=_navigableItemArchivableRepresentations;

@end

