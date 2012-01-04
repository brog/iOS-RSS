//
//  KKNHighlightManager.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import "KKNHighlightManagerDelegate.h"

/*!
 * @class KKNHighlightManager
 *
 * This class manages:
 * - the user interactions
 * - everything which is displayed
 * - the selection contexts (KKNSelectionContextProtocol)
 */
@interface KKNHighlightManager : NSObject

/*!
 * This class stores information about the views that were highlighted to allow faster selections.\n
 * You can clear the cache anytime if you need to release some memory. The next time the user has his finger
 * on a view, the cache will be recreated automatically.
 *
 * Note: When the application receives a memory warning notification, the highlight manager will automatically
 * clear the cache if the user is not highlighting anything at that time.
 *
 * @param all if TRUE will remove the cache for everything, otherwise only for the views which don't have a superview anymore.
 */
- (void)clearCache:(BOOL)all;

/*!
 * A delegate to get events from KKNHighlightManager.
 */
@property(assign) id<KKNHighlightManagerDelegate> delegate;

@end