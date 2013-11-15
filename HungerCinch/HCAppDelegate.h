//
//  HCAppDelegate.h
//  HungerCinch
//
//  Created by Shane Hartman on 11/14/13.
//  Copyright (c) 2013 Shane Hartman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PickupOrDonateViewController;
@class AppointmentsViewController;


@interface HCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UITabBarController *tabBarController;
@property (strong, nonatomic) PickupOrDonateViewController *pickupOrDonateController;
@property (strong, nonatomic) AppointmentsViewController *appointmentsController;

@end
