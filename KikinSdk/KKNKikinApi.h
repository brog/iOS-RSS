//
//  KKNKikinApi.h
//  KikinIos
//
//  Created by ludovic cabre on 10/17/11.
//  Copyright (c) 2011 kikin. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * @class KKNKikinApi
 *
 * This class contains functions to initialize and configure the API.
 * You won't be able to use the API until you initialize it correctly.
 */
@interface KKNKikinApi : NSObject

/*!
 * This function initializes the API. You should call this function when your application is launched.\n
 * (in your app delegate application:didFinishLaunchingWithOptions:)
 *
 * If you do not have an api key yet, you can contact us at api@kikin.com
 *
 * @param apiKey the api key
 */
+ (void)initWithApiKey:(NSString*)apiKey;

/*!
 * This function initializes the API and theme for the navigation controller.\n
 * You should call this function when your application is launched.\n
 * (in your app delegate application:didFinishLaunchingWithOptions:)
 * 
 * If theme is set to nil, then API will use the default system's theme.\n
 *
 * NOTE: In iPad this will not make any effects except when user previews\n 
 *       the site or try to email something. So you should not set the\n 
 *       theme unless you want to change the color for site preview and\n 
 *       email dialog in your application.
 * 
 * If you do not have an api key yet, you can contact us at api@kikin.com
 *
 * @param apiKey the api key
 * @param color navigation controller theme color
 */
+ (void)initWithApiKey:(NSString*)apiKey andTheme:(UIColor*)color;

/*!
 * This function sets the theme for the navigation controller.
 *
 * If theme is set to nil, then API will use the default system's theme.\n
 *
 * NOTE: In iPad this will not make any effects except when user previews\n 
 *       the site or try to email something. So you should not set the\n 
 *       theme unless you want to change the color for site preview and\n 
 *       email dialog in your application.
 *
 * @param color navigation controller theme color
 */
+ (void) setTheme:(UIColor*)color;

@end
