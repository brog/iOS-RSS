//
//  KKNSelection.h
//  KikinIos
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNSelection
 * 
 * This is base class of KKNMultiOverlay.\n
 * It stores the information that was used to create its superclass.
 */
@interface KKNSelection : NSObject

/*!
 * The data associated with the current selection\n
 * (can be NULL)
 */
@property(retain) NSDictionary* data;

@end
