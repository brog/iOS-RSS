//
//  KKNAnalyserEntity.h
//  KikinIos
//
//  Created by ludovic cabre on 11/3/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNAnalyserEntity
 * 
 * This class stores the result of a text analysis ([KKNTextAnalyser analyseText:selectionIndex:]).
 * 
 * It contains two key information:
 * - What should be highlighted
 * - What kind of highlight is it
 */
@interface KKNAnalyserEntity

/*!
 * The range of the text giving as parameter of [KKNTextAnalyser analyseText:selectionIndex:] that should be hightlighted.
 */
@property(assign) NSRange range;

/*!
 * The type of the entity.
 *
 * This type can be:
 * - email
 * - url
 * - address
 * - nouns
 * - phone
 * - state (New York, Colorado, ..)
 * - twitter
 */
@property(retain) NSString* type;

@end
