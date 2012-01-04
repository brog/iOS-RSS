//
//  KKNRawRect.h
//  KikinIos
//
//  Created by ludovic cabre on 7/21/11.
//  Copyright 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNRawRect
 * 
 * This class is only used to store a rectangle.
 */
@interface KKNRawRect : NSObject

/*!
 * Initializer taken a rect as parameter
 *
 * @param rect the rectangle to save in the object
 * @return the newly created object
 */
- (id)initWithCGRect:(CGRect)rect;

/*!
 * property storing the rect associated with the object
 */
@property(assign) CGRect rect;

@end
