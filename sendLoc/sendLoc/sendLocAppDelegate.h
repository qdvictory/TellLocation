//
//  sendLocAppDelegate.h
//  sendLoc
//
//  Created by Gao Semaus on 11-9-20.
//  Copyright 2011年 Chlova. All rights reserved.
//

#import <UIKit/UIKit.h>

@class sendLocViewController;

@interface sendLocAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet sendLocViewController *viewController;

@end
