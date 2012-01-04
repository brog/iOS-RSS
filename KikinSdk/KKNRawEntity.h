//
//  KKNRawEntity.h
//  KikinIos
//
//  Created by ludovic cabre on 7/21/11.
//  Copyright 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNRawEntity
 *
 * This class stores a user selection when editing/adjusting the selection.\n
 * It only stores the rectangle for all the words in the selection. The text in those
 * rectangles does not matter because it won't be displayed when the user is adjusting
 * the selection.
 */
@interface KKNRawEntity : NSObject

/*!
 * This property contains all the rectangles for a selection
 * (KKNRawRect)
 */
@property(retain) NSMutableArray* rects;

/*!
 * This property contains the selected text
 */
@property(retain) NSString* text;

@end
