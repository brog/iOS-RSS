//
//  KKNTapAndHoldGestureDelegate.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KKNTapAndHoldGesture;

/*!
 * @protocol KKNTapAndHoldGestureDelegate
 *
 * The KKNTapAndHoldGestureDelegate protocol defines methods that a delegate of a KKNTapAndHoldGesture object
 * can optionally implement to intervene when this gesture is activated.
 */
@protocol KKNTapAndHoldGestureDelegate <NSObject>
@optional

/*!
 * This function is getting called when the user did a long press and his finger is
 * entering a supported view. If the user finger leaves the view and then comes back,
 * the function will be called again.
 *
 * @param sender the gesture which is sending this event
 * @param view the view that the finger just entered
 * @return a boolean allowing or not highlighting in this view
 */
- (BOOL)tapAndHoldGesture:(KKNTapAndHoldGesture*)sender shouldHighlightView:(UIView*)view;

/*!
 * This function is getting called when the user did a long press and his finger is
 * entering a new view. If this function is implemented, its returned value is used
 * to know if the view is an "highlightable" view. The function highlightManager:selectionContextForView: (KKNHighlightManagerDelegate)
 * will then be called and MUST return a valid selection manager for this view.\n
 * This function should only be implemented if you want to highlight text in an unsupported view.
 *
 * You may return NULL you do not support this type of view.
 *
 * @param sender the gesture which is sending this event
 * @param view the view that the finger just entered
 * @return the view that is highlightable (can be a parent of the given view)
 */
- (UIView*)tapAndHoldGesture:(id)sender getHighlightableView:(UIView*)view;

@end