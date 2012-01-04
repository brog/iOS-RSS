//
//  KKNTapAndHoldGesture.h
//  KikinApiTest
//
//  Created by ludovic cabre on 11/1/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KKNHighlightManager.h"
#import "KKNTapAndHoldGestureDelegate.h"
#import "KKNHighlightManagerDelegate.h"

/*!
 * @class KKNTapAndHoldGesture
 *
 * This class is a custom "Long press" gesture that activates kikin.
 *
 * You can use it as you will normally use any other gesture. The only difference is that
 * you need to use [KKNTapAndHoldGesture initWithView:] to initialize the object.
 */
@interface KKNTapAndHoldGesture : UIGestureRecognizer

/*!
 * This function MUST be used to initialize the gesture (initWithTarget:action: from UIGestureRecognizer won't work).\n
 * You have to initialize the API before initializing this object (see KKNKikinApi).\n
 * Also, you need to add this gesture recognizer for it to work (see UIView addGestureRecognizer:).
 *
 * @param view the view in which will be to displayed the black layer and the overlay.
 * Usually you want this view to be your root controller's view.
 * @return an instance of the newly created object if everything is fine
 */
- (id)initWithView:(UIView*)view;

/*!
 * A reference to the highlight manager used by this object.
 */
@property(retain) KKNHighlightManager* highlightManager;

/*!
 * A delegate to receives event from the KKNTapAndHoldGesture.
 */
@property(assign) id<KKNTapAndHoldGestureDelegate> actionDelegate;

/*!
 * A delegate to receives event from the KKNHighlightManager. This is just a shortcut to
 * getting the highlight manager and set its delegate property.
 */
@property(assign) id<KKNHighlightManagerDelegate> highlightDelegate;

@end
