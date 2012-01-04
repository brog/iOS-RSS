//
//  KKNMultiOverlay.h
//  KikinIos
//
//  Created by ludovic cabre on 6/16/11.
//  Copyright 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KKNSelection.h"
#import "KKNExtract.h"

/*!
 * @class KKNMultiOverlay
 *
 * This class represents a user text selection.
 *
 * A selection is composed of multiple overlays (displayed as white rounded views with a black text inside).\n
 * It also contains extra information such as the text nearby (in KKNExtract) and the type (email, url, ...). This extra
 * information is sent to the server in order to determine what are the best results.
 */
@interface KKNMultiOverlay : KKNSelection

/*!
 * This property represents the text for the current selection
 */
@property(retain) NSString* text;

/*!
 * This property is the type of selection (email, link, address, ..)
 */
@property(retain) NSString* type;

/*!
 * This property contains extra information about the surroundings of the current selection
 * (like the text before/after..)
 */
@property(retain) KKNExtract* extract;

/*!
 * This property is the list of overlays to be displayed
 * (this is an array of KKNOverlay objects).
 */
@property(retain) NSMutableArray* overlays;

@end
