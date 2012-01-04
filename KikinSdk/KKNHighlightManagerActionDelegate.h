//
//  KKNHighlightManagerActionDelegate.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KKNHighlightedViewConfig.h"
#import "KKNSelectionContextProtocol.h"
#import "KKNResultsController.h"

@class KKNHighlightManager;

/*!
 * @protocol KKNHighlightManagerActionDelegate
 *
 * The KKNHighlightManagerActionDelegate protocol defines methods that can optionally implement to be notified
 * when the user interacts with the results or when the KKNHighlightManager does some actions.
 * 
 * You will need to create a custom configuration object (KKNHighlightedViewConfig) and set its "delegate" property
 * in order to receive calls for this delegate.
 */
@protocol KKNHighlightManagerActionDelegate <NSObject>
@optional

/*!
 * This function is getting called when the black background is shown.
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerDidEnterSelectionMode:(KKNHighlightManager*)sender;

/*!
 * This function is getting called when the black background is dismissed.
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerDidLeaveSelectionMode:(KKNHighlightManager*)sender;

/*!
 * This function is getting called when the results controller will be presented to the user.\n
 * This results controller is not yet injected in a UINavigationController.
 *
 * @param sender the highlight manager sending the event
 * @param resultsController the results controller that will be displayed
 */
- (void)highlightManager:(KKNHighlightManager*)sender willShowResultsController:(KKNResultsController*)resultsController;

/*!
 * This function is getting called when the results controller was presented to the user.\n
 * This results controller is was injected in a UINavigationController.
 *
 * @param sender the highlight manager sending the event
 * @param resultsController the results controller that will be displayed
 */
- (void)highlightManager:(KKNHighlightManager*)sender didShowResultsController:(KKNResultsController*)resultsController;

/*!
 * This function is getting called when the results controller was dismissed
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerDidDismissResultsController:(KKNHighlightManager*)sender;

/*!
 * This function is getting called when the selected text changes
 *
 * @param sender the highlight manager sending the event
 * @param selection the new selected text (NULL if no selection or if it's an image)
 */
- (void)highlightManager:(KKNHighlightManager*)sender didSelectionChange:(NSString*)selection;

/*!
 * This function is getting called when user did select the text and results controller is shown.\n
 * In case of iPhone/iPod Touch this function is called when user selects the text and API shows the\n
 * menu controller.
 *
 * @param sender the highlight manager sending the event
 * @param selection the selected text (NULL if no selection or if it's an image)
 */
- (void)highlightManager:(id)sender didSelectText:(NSString*)selection;

/*!
 * This function is getting called when the menu controller is going to be\n
 * presented to the user. This callback is really helpful in iPhone/iPod Touch\n
 * where we do not show the results controller on the text selection. 
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerWillShowMenuController:(id)sender;

/*!
 * This function is getting called when the menu controller was presented to the user.\n
 * This callback is really helpful in iPhone/iPod Touch where we do not show the \n
 * results controller on the text selection. 
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerDidShowMenuController:(id)sender;

/*!
 * This function is getting called when the menu controller was dismissed
 *
 * @param sender the highlight manager sending the event
 */
- (void)highlightManagerDidDismissMenuController:(id)sender;

/*!
 * This function is getting called when we are about to decide the arrow direction\n
 * for results controller. If valid arrow direction is returned in the callback\n
 * then returned arrow direction is forced to the results controller.
 *
 * @param sender the highlight manager sending the event
 * @param rect rectangle for the highlighted text to which the results controller's
 *        arrow will be pointing.
 */
- (UIPopoverArrowDirection)highlightManagerGetResultsControllerArrowDirection:(id)sender popoverPointOfRect:(CGRect)rect;

@end