/**
 *  Segmented slider
 */

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface MMSegmentSlider : UIControl

/**
 * Basic slider color
 */
IBInspectable @property (nonatomic, strong) UIColor *basicColor;

/**
 *  Basic labels color
 */
IBInspectable @property (nonatomic, strong) UIColor *labelColor;

/**
 * Selected value color
 */
IBInspectable @property (nonatomic, strong) UIColor *selectedValueColor;

/**
 * Color of selected label
 */
IBInspectable @property (nonatomic, strong) UIColor *selectedLabelColor;

/**
 * Circles radius
 */
IBInspectable @property (nonatomic) NSInteger circlesRadius;

/**
 * Contains NSNumber values
 */
@property (nonatomic, strong) NSArray *values;

/**
 * Contains NSString labels
 */
@property (nonatomic, strong) NSArray *labels;

/**
 * Font for labels
 */
@property (nonatomic, strong) UIFont *labelsFont;

/**
 * Set/get current selected value
 */
@property (nonatomic, readonly) NSObject *currentValue;

/**
 * Set/get selected item index
 */
@property (nonatomic) NSInteger selectedItemIndex;

/**
 * Set/get selected item index (animated)
 */
- (void)setSelectedItemIndex:(NSInteger)selectedItemIndex animated:(BOOL)animated;

@end
