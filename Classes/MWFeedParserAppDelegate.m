//
//  MWFeedParserAppDelegate.m
//  MWFeedParser
//
//  Copyright (c) 2010 Michael Waterfall
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  1. The above copyright notice and this permission notice shall be included
//     in all copies or substantial portions of the Software.
//  
//  2. This Software cannot be used to archive or collect data such as (but not
//     limited to) that of events, news, experiences and activities, for the 
//     purpose of any concept relating to diary/journal keeping.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "MWFeedParserAppDelegate.h"
#import "RootViewController.h"
#import "KKNKikinApi.h"
#import "KKNTapAndHoldGesture.h"

@implementation MWFeedParserAppDelegate

@synthesize window;
@synthesize navigationController;

#pragma mark -
#pragma mark Application lifecycle

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    // Override point for customization after app launch    
	//[window addSubview:[navigationController view]];
    window.rootViewController = navigationController;
    [window makeKeyAndVisible];
    
    //kikin
    [KKNKikinApi initWithApiKey:@"14292cd1cdf97f06f4a18a41266c924c"];
    
    NSLog(@"view: %@", window);
    KKNTapAndHoldGesture* gesture = [[KKNTapAndHoldGesture alloc] initWithView:window];
    [window addGestureRecognizer:gesture];
//    gesture.actionDelegate = self;
    [gesture release];
    
	return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application {
	// Save data if appropriate
}

//- (BOOL)tapAndHoldGesture:(KKNTapAndHoldGesture*)sender shouldHighlightView:(UIView*)view {
//    NSLog(@"View: %@", view);
//    return YES;
//}
//
//- (UIView*)tapAndHoldGesture:(id)sender getHighlightableView:(UIView*)view {
//    NSLog(@"View: %@", view);
//    if ([view isKindOfClass:(NSClassFromString(@"UITableViewCellContentView"))]) {
//        return ((UITableViewCell*)view.superview).textLabel;
//    }
//    
//    return nil;
//}

#pragma mark -
#pragma mark Memory management

- (void)dealloc {
	[navigationController release];
	[window release];
	[super dealloc];
}


@end

