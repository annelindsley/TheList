//
//  List.h
//  TheList
//
//  Created by Anne Lindsley on 4/8/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Admin, Guest, Message;

@interface List : NSManagedObject

@property (nonatomic, retain) NSString * event;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSSet *admins;
@property (nonatomic, retain) NSSet *guests;
@property (nonatomic, retain) NSSet *messages;
@end

@interface List (CoreDataGeneratedAccessors)

- (void)addAdminsObject:(Admin *)value;
- (void)removeAdminsObject:(Admin *)value;
- (void)addAdmins:(NSSet *)values;
- (void)removeAdmins:(NSSet *)values;

- (void)addGuestsObject:(Guest *)value;
- (void)removeGuestsObject:(Guest *)value;
- (void)addGuests:(NSSet *)values;
- (void)removeGuests:(NSSet *)values;

- (void)addMessagesObject:(Message *)value;
- (void)removeMessagesObject:(Message *)value;
- (void)addMessages:(NSSet *)values;
- (void)removeMessages:(NSSet *)values;

@end
