/*!
\mainpage kikin's API

\section intro_sec -- Introduction --

Kikin's API is an iOS library that allows you to integrate the EasySearch functionality to your applications in a matter of minutes!\n
The API exposes a gesture (KKNTapAndHoldGesture) that replaces the normal long press behavior of some supported views (UIWebView and UITextView).\n
Only a few changes are required to integrate this API to your project.

\section prereq_sec -- Prerequisites --
You must have the iOS 4.2 SDK (or newer) and Xcode 4 installed on your system. For the latest versions, please visit Apple's iOS Dev Center.
 
\section install_sec -- Installation --

\subsection step1 Step 1: Request an API key.
You can request an API key by sending us an email at api@kikin.com. An API key must be used to make API requests.\n

\subsection step2 Step 2: Download the library.
You can download the library on our api page http://www.kikin.com/api/kikin_api.zip\n

\subsection step3 Step 3: Add the library to your Xcode project.
Add all the files from the directory "KikinSdk" to your xcode project. Two ways to add files to a project:\n
- Drag the files to your Xcode project hierarchy.\n
- Right click on your project hierarchy and then click on "Add files.."
 
Please make sure that those files are copied in the project by checking the "Copy items into destination forlder".

\subsection step4 Step 4: Add the library to your Xcode project. 
 You will need to add some extra frameworks in order to be able to build your project:
 - CoreGraphics.framework
 - Foundation.framework
 - UIKit.framework
 - CoreText.framework
 - CFNetwork.framework
 - AVFoundation.framework
 - AddressBookUI.framework
 - AddressBook.framework
 - MapKit.framework
 - MessageUI.framework
 - MobileCoreServices.framework
 - QuartzCore.framework
 - CoreLocation.framework
 - EventKit.framework
 - Twitter.framework (marked as "Optional" in the target's "build phases")
 - Accounts.framework (marked as "Optional" in the target's "build phases")
 - libz.dylib

\subsection step5 Step 5: Integrate a few lines to your project
First change, you will have to edit your project build settings. Search for the line OTHER_LDFLAGS (Other Linker Flags) and make sure that it contains "-ObjC". Otherwise when building your project you will get some undefined classes.
 
You now need to initialized the api in the application delegate (UIApplicationDelegate).

Add the header file at the top of the file
@code
#import "KKNKikinApi.h"
@endcode
 
Search for the function application:didFinishLaunchingWithOptions:launchOptions and add the following line into it:
@code
[KKNKikinApi initWithApiKey:@"YOUR_API_KEY"];
@endcode

Now add a gesture to a view in your project to enable EasySearch.
 
The easiest way is to add these lines to your main controller (view here is your controller's view).
At the top of the file
@code 
#import "KKNTapAndHoldGesture.h"
@endcode
Add the following to viewDidLoad or loadView depending if your app uses nib files:
@code
KKNTapAndHoldGesture* gesture = [[KKNTapAndHoldGesture alloc] initWithView:view];
[view addGestureRecognizer:gesture];
[gesture release];
@endcode

More customization options are available.\n
See the "Data Structures" section of the documentation to see the extra properties and functions available.
 
\section test_app_sec -- Sample Application --

If you are having difficulties integrating the library or just want to the see it in action, a test application is
available in the SDK ( KikinApiTest.xcodeproj ):\n
http://www.kikin.com/api/kikin_api.zip\n

\image html TestAppScreenshot.png "Screenshot of the test application on an iPad"
 
\section issues_sec -- Feedback --
  
If you are encountering any issues with the SDK, feel free to contact us ( api@kikin.com ) and we will contact you ASAP. You can also give your feeback or suggestions.

*/