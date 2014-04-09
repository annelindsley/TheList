//
//  Datestore.h
//  TheList
//
//  Created by Anne Lindsley on 4/6/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Guest+methods.h"

@interface Datestore : NSObject
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

+ (instancetype) sharedGuestsDataStore;

- (void)fetchGuests;
- (NSInteger)numOfGuests;
- (Guest *)getGuestAtIndex:(NSInteger)index;
- (Guest *)newGuest;



@end
