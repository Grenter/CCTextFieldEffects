//
//  YoshikoTextField.h
//  CCTextFieldEffects
//
//  Created by Kelvin on 6/26/16.
//  Copyright © 2016 Cokile. All rights reserved.
//

#import "CCTextField.h"

IB_DESIGNABLE
@interface YoshikoTextField : CCTextField

#pragma mark - Public properties
/**
 *  The color of the border when it has content.
 *
 *  This property applies a color to the edges of the control. The default value for this property is a green color.
 */
@property (strong, nonatomic) IBInspectable UIColor *activeBorderColor;

/**
 *  The color of the border when it has no content.
 *
 *  This property applies a color to the edges of the control. The default value for this property is a clear color.
 */
@property (strong, nonatomic) IBInspectable UIColor *inactiveBorderColor;

/**
 *  The color of the input's background when it has content. When it's not focused it reverts to the color of the `inactiveBorderColor` The default value for this property is a white color.
 */
@property (strong, nonatomic) IBInspectable UIColor *activeBackgroundColor;

/**
 *  The color of the placeholder text.
 *
 *  This property applies a color to the complete placeholder string. The default value for this property is a dark gray color.
 */
@property (strong, nonatomic) IBInspectable UIColor *placeholderColor;

/**
 *  The scale of the placeholder font.
 *
 *  This property determines the size of the placeholder label relative to the font size of the text field.
 */
@property (nonatomic) IBInspectable CGFloat  placeholderFontScale;

@end
