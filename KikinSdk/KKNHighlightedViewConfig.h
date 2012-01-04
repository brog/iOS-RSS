//
//  KKNHighlightedViewConfig.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KKNHighlightManagerActionDelegate.h"

/*!
 * @class KKNHighlightedViewConfig
 *
 * This class allows you to configure the behavior of kikin on a specific view.
 *
 * You should create and return this object when the function
 * [KKNHighlightManagerDelegate highlightManager:configurationForView:]
 * is called.\n
 * You will need to set the property highlightDelegate (KKNTapAndHoldGesture) if you
 * want to have a custom configuration.
 * 
 * A configuration is not global. All views can have their own configuration.
 * Everytime a user engages with a view, the delegate will be called to
 * get a configuration for this view.
 */
@interface KKNHighlightedViewConfig : NSObject

/*!
 * This boolean allows you to show or hide the "open in a new tab" button.\n
 * If this variable is set to YES, the function highlightedView:openNewTab: (KKNHighlightManagerDelegate)
 * will be called is the user clicks a "open in a new tab" button.
 *
 * The default value is NO
 */
@property(assign) BOOL showOpenTabs;

/*!
 * This boolean allows you to show or hide the "more results for xx" at the bottom of the results controller.
 *
 * The default value is YES
 */
@property(assign) BOOL showMoreResults;

/*!
 * This boolean allows you to show or hide the top actions (for email, links and phone numbers) in the results controller.\n
 *
 * The default value is YES for iPad and NO for other devices.
 */
@property(assign) BOOL showTopActions;

/*!
 * This boolean allows you configure what will happen when the user releases its finger.\n
 * If this property is set to YES, the results controller will automatically be shown. Otherwise, the user
 * will first see an action sheet from which he can hit "search" to show the results controller.
 *
 * The default value is YES for iPad and NO for other devices.
 */
@property(assign) BOOL searchImediately;

/*!
 * This delefate will be called everytime an action is triggered on a specific view.
 */
@property(assign) id<KKNHighlightManagerActionDelegate> delegate;

@end
