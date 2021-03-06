/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventNotesInlineEditItem, EKEventURLInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem {
    EKEventNotesInlineEditItem *_notesEditItem;
    EKEventURLInlineEditItem *_urlEditItem;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (id)init;
- (BOOL)isInline;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedResponder:(id)arg1;

@end
