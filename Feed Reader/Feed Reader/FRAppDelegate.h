//
//  FRAppDelegate.h
//  Feed Reader
//
//  Created by Brian Rogers on 1/4/12.
//  Copyright (c) 2012 kikin Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRAppDelegate : UIResponder <UIApplicationDelegate> {
    UIWindow *window;
    UINavigationController *navigationController;    
}

@property (strong, nonatomic) UIWindow *window;

@end
