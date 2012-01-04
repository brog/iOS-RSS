//
//  KKNTextAnalyser.h
//  KikinIos
//
//  Created by ludovic cabre on 10/25/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KKNAnalyserEntity.h"

/*!
 * @class KKNTextAnalyser
 * 
 * kikin's SDK contains multiple algorithm that detects entities in a text (url, email, phone number, ...).\n
 * This class allows you to easily analyse a text and gives you back data about what should be highlighted
 * and what kind of entity it is.
 */
@interface KKNTextAnalyser : NSObject

/*!
 * This function analyses the text given as parameter (starting from index).\n
 * The results of this analysis is a KKNAnalyserEntity, an object storing what range should be
 * highlighted and what type is it (url, email, phone number, ...).
 *
 * @param text the text that should be analysed
 * @param index this index to start analying from (normally, the position of the user's finger in the text)
 * @return an entity giving information about what text should be highlighted (and its type)
 */
+ (KKNAnalyserEntity*)analyseText:(NSString*)text selectionIndex:(NSUInteger)index;

@end
