//
//  KKNHighlightManagerDelegate.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KKNHighlightedViewConfig.h"
#import "KKNSelectionContextProtocol.h"

@class KKNHighlightManager;

/*!
 * @protocol KKNHighlightManagerDelegate
 *
 * The KKNHighlightManagerDelegate protocol defines methods that a delegate of a KKNHighlightManager object
 * can optionally implement.
 */
@protocol KKNHighlightManagerDelegate <NSObject>
@optional

/*!
 * This function is getting called when the user clicks on a "open in a new tab" button.
 *
 * The button "open in a new tab" is hidden by default. To show this button, you need to implement the
 * function highlightManager:configurationForView: of this protocol.
 *
 * @param sender the view in which is the current selection
 * @param url the url to open in a new tab
 */
- (void)highlightedView:(UIView*)sender openNewTab:(NSURL*)url;

/*!
 * This function is getting called when the user clicks on a "open link" button
 *
 * @param sender the view in which is the current selection
 * @param url the url to load
 */
- (void)highlightedView:(UIView*)sender openLink:(NSURL*)url;

/*!
 * This function is getting called when the user did a long press and his finger is
 * entering a supported view. If the user finger leaves the view and then comes back,
 * the function will be called again.
 *
 * @param sender the highlight manager which is sending the event
 * @param view the view that the finger just entered
 * @return the configuration for the current touched view. You can configure here what UI
 * elements will be visible and how will the highlight manager behave for events on this specific
 * view
 */
- (KKNHighlightedViewConfig*)highlightManager:(KKNHighlightManager*)sender configurationForView:(UIView*)view;

/*!
 * This function is getting called if a view was said to be highlightable by
 * tapAndHoldGesture:getHighlightableView: (see KKNTapAndHoldGestureDelegate) or if it is a
 * supported view by the API (UIWebView, UITextView, ..).
 *
 * The returned object handles all selection interaction. It must be able to give for any CGPoint
 * object information like:
 * - text at this point
 * - rectangles containing a text
 *
 * @param sender the highlight manager which is sending the event
 * @param view the view that was said to be highlightable
 * @return an object implementing KKNSelectionContextProtocol
 */
- (id<KKNSelectionContextProtocol>)highlightManager:(KKNHighlightManager*)sender selectionContextForView:(UIView*)view;

@end