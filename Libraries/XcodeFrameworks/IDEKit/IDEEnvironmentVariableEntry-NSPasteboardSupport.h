/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEnvironmentVariableEntry.h"

#import "NSPasteboardReading-Protocol.h"
#import "NSPasteboardWriting-Protocol.h"

@interface IDEEnvironmentVariableEntry (NSPasteboardSupport) <NSPasteboardReading, NSPasteboardWriting>
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
@end

