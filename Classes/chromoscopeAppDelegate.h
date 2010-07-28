//
//  chromoscopeAppDelegate.h
//  chromoscope
//
//  Created by Stuart Lynn on 28/07/2010.
//  Copyright me 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class chromoscopeViewController;

@interface chromoscopeAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    chromoscopeViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet chromoscopeViewController *viewController;

@end

