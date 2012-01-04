//
//  WebViewController.m
//  MWFeedParser
//
//  Created by Brian Rogers on 12/22/11.
//  Copyright (c) 2011 Michael Waterfall. All rights reserved.
//

#import "WebViewController.h"

@implementation WebViewController

@synthesize webView, urlString, titleString;


- (void)loadView {
    // the UIView that this view controller will own
    UIView* view = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    view.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    view.backgroundColor = [UIColor blackColor];
    self.view = view;
    [view release];
    
    CGRect webFrame = [[UIScreen mainScreen] applicationFrame];
    webFrame.origin.y -= 20.0; // shift the display up so that it covers the default open space from the content view
    webView = [[UIWebView alloc] initWithFrame:webFrame];
    
    //Create a URL object.
    NSURL *url = [NSURL URLWithString:urlString];
    
    //URL Requst Object
    NSURLRequest *requestObj = [NSURLRequest requestWithURL:url];
    
    //Load the request in the UIWebView.
    [webView loadRequest:requestObj];
	
    self.title = titleString;
    
    [view addSubview:webView];
    
	// save this intance
//	instance = self;	
    
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
