//
//  KKNOverlay.h
//  KikinIos
//
//  Created by ludovic cabre on 10/25/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNOverlay
 *
 * This class stores information about an "overlay". An overlay represents a white highlight when the user
 * selects something. It contains the position of the text on the screen (pageRect) and its font.
 */
@interface KKNOverlay : NSObject

/*!
 * This property stores the text of the overlay
 */
@property(retain) NSString* text;

/*!
 * This property stores the rectangle in which the text is
 */
@property(assign) CGRect pageRect;

/*!
 * This property stores the font of the text
 */
@property(retain) UIFont* font;

@end
