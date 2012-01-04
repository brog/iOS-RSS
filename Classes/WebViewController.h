//
//  WebViewController.h
//  MWFeedParser
//
//  Created by Brian Rogers on 12/22/11.
//  Copyright (c) 2011 Michael Waterfall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface WebViewController : UIViewController {
    
    UIWebView *webView;
    NSString    *urlString;
    NSString *titleString;
}

@property (nonatomic, retain) UIWebView *webView;
@property (nonatomic, retain) NSString *urlString;
@property (nonatomic, retain) NSString *titleString;

@end