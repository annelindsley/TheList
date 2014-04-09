//
//  FISAppDelegate.m
//  TheList
//
//  Created by Anne Lindsley on 4/6/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import "FISAppDelegate.h"
#import "Datestore.h"
#import "Guest+methods.h"


@implementation FISAppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions


{
    Datestore *dataStore = [Datestore sharedGuestsDataStore];
    Guest *bree= [Guest guestWithAddedBy:@"Anne" Company:@"PR" Email:nil Facebook:nil Instagram:nil JobTitle:nil LinkedIn:nil Name:@"Bree Sutton" Notes:@"Lizzie's friend, comp drinks" NumberInParty:4 PhoneNumber:nil PreciousPerson:@"YES" Twitter:nil TypeOfAccess:@"VIP" inContext:dataStore.managedObjectContext];
    Guest *erica = [Guest guestWithAddedBy:@"Anne" Company:nil Email:nil Facebook:nil Instagram:nil JobTitle:nil LinkedIn:nil Name:@"Erica Edmond" Notes:nil NumberInParty:nil PhoneNumber:nil PreciousPerson:@"NO" Twitter:nil TypeOfAccess:nil inContext:dataStore.managedObjectContext];
    
    
    
    
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Saves changes in the application's managed object context before the application terminates.
    //[self saveContext];
    
}


#pragma mark - Core Data stack

// Returns the managed object context for the application.
// If the context doesn't already exist, it is created and bound to the persistent store coordinator for the application.
@end
