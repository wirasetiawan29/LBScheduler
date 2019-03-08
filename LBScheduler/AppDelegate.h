//
//  AppDelegate.h
//  LBScheduler
//
//  Created by Wira on 3/8/19.
//  Copyright © 2019 Wira Setiawan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

