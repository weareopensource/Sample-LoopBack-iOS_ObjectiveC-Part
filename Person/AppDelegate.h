//
//  AppDelegate.h
//  Person
//
//  Created by RYPE on 19/04/2015.
//  Copyright (c) 2015 RYPE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LoopBack/LoopBack.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
+ ( LBRESTAdapter *) adapter;

@end

