//
//  StoryCubesAppDelegate.h
//  StoryCubes
//
//  Created by Micah Linnemeier on 3/17/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StoryCubesViewController;

@interface StoryCubesAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet StoryCubesViewController *viewController;

@end
