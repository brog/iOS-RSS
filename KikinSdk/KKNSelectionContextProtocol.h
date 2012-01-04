//
//  KKNSelectionContextProtocol.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/4/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KKNSelection.h"
#import "KKNRawEntity.h"
#import "KKNMultiOverlay.h"

/*!
 * @protocol KKNSelectionContextProtocol
 *
 * The KKNSelectionContextProtocol protocol defines methods that a class must implement in order to enable
 * selection in a custom UIView type not supported by the SDK.
 *
 * The SDK currently only supports selection in UIWebView and UITextView.
 */
@protocol KKNSelectionContextProtocol <NSObject>
@required

/*!
 * This function returns the view in which is the selection.\n
 * Coordinates returned by the other functions of this protocol must be relative to this view.
 *
 * @return the view in which is the selection.
 */
- (UIView*)view;

/*!
 * This function should extend the current selection to the "text" parameter.\n
 * The text might be smaller or bigger.
 *
 * @param text the new text to select
 * @param oldText the text that was selected before
 * @return a MultiOverlay object describing the new selection
 */
- (KKNMultiOverlay*)extendHighlightToText:(NSString*)text oldText:(NSString*)oldText;

/*!
 * This function should extend the start/end of the selection to the text at the
 * given position.
 * 
 * @param point the position where to extend the selection
 * @param startOrEnd which part of the selection should be moved
 * @return the rectangles for the new selection
 */
- (KKNRawEntity*)extendHighlightTo:(CGPoint)point startOrEnd:(BOOL)startOrEnd;

/*!
 * This function should return the rectangles for the currently selected text.
 * 
 * @return the rectangles for the current selection
 */
- (KKNRawEntity*)getRawRects;

/*!
 * This function should return the current selection.\n
 * It should be a MultiOverlay.
 * 
 * @return the current selection
 */
- (KKNSelection*)getCurrentSelection;

/*!
 * This function should make the given text the current selection (or NULL if not found).
 * 
 * @param text the text to select in the view
 */
- (void)selectText:(NSString*)text;

/*!
 * In the case where the user releases his finger and the selection changes at the last second,
 * this function shoulf restore the previously selected term.
 */
- (KKNSelection*)processTouch:(CGPoint)position firstTouch:(BOOL)firstTouch;

/*!
 * This function should disable the native selection behavior of the view.
 * (if there is one)
 */
- (void)cancelNativeBehavior;

/*!
 * In the case where the user releases his finger and the selection changes at the last second,
 * this function shoulf restore the previously selected term.
 */
- (void)usePreviousSelection;

/*!
 * This function should reenable the native selection behavior that was disabled by
 * cancelNativeBehavior.
 */
- (void)enableNativeBehavior;

/*!
 * If your text is in a scroll view, this function is called when it is needed
 * to make sure that the current selection is visible by the user.\n
 */
- (void)scrollToCurrentSelection;

/*!
 * This function is called when the attached view's frame has changed size.
 * In most cases this means that the text might have changed positions and then
 * it might be needed to invalidate the current position
 */
- (void)viewFrameDidChange;

/*!
 * This function should initialize your selection code and when ready call the callback.
 *
 * @param callback the function to be called when ready.
 */
- (void)executeWhenReady:(void(^)(void))callback;

@optional

/*!
 * This should cancel touches currently active in the view to avoid
 * interfering with selecting something.
 *
 * Ex: In a UIWebView this cancels any scrolling event or touch event started prior to
 * the detection of the long press.
 */
- (void)cancelTouchesInView;


@end
