/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIImage;

@interface UIKeyboardEmojiCategoriesControl : UIControl {
    UIImage *_darkDivider;
    NSMutableArray *_dividerViews;
    UIImage *_plainDivider;
    NSMutableArray *_segmentViews;
    NSInteger _selected;
    UIImage *_selectedDivider;
    NSArray *_selectedImages;
    NSInteger _total;
    NSArray *_unselectedImages;
}

@property NSInteger selectedIndex;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)releaseImagesAndViews;
- (NSInteger)selectedIndex;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectedIndex:(NSInteger)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateSegmentAndDividers:(NSInteger)arg1;
- (void)updateSegmentImages;

@end