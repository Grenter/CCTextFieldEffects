//
//  JiroTextField.h
//  CCTextFieldEffects
//
//  Created by Kelvin on 6/26/16.
//  Copyright © 2016 Cokile. All rights reserved.
//

#import "CCTextField.h"

IB_DESIGNABLE
@interface JiroTextField : CCTextField

#pragma mark - Public properties
/**
 *  The color of the border.
 *
 *  This property applies a color to the lower edge of the control. The default value for this property is a shadow blue color.
 */
@property (strong, nonatomic) IBInspectable UIColor *borderColor;

/**
 *  The color of the placeholder text.
 *
 *  This property applies a color to the complete placeholder string. The default value for this property is a shadow blue color.
 */
@property (strong, nonatomic) IBInspectable UIColor *placeholderColor;

/**
 *  The scale of the placeholder font.
 *
 *  This property determines the size of the placeholder label relative to the font size of the text field.
 */
@property (nonatomic) IBInspectable CGFloat placeholderFontScale;

@end
