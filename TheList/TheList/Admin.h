//
//  Admin.h
//  TheList
//
//  Created by Anne Lindsley on 4/8/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class List, Message;

@interface Admin : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * approvalLevel;
@property (nonatomic, retain) NSString * phoneNumber;
@property (nonatomic, retain) NSString * userID;
@property (nonatomic, retain) NSString * emailAddress;
@property (nonatomic, retain) NSString * company;
@property (nonatomic, retain) NSString * jobTitle;
@property (nonatomic, retain) NSSet *lists;
@property (nonatomic, retain) NSSet *messages;
@end

@interface Admin (CoreDataGeneratedAccessors)

- (void)addListsObject:(List *)value;
- (void)removeListsObject:(List *)value;
- (void)addLists:(NSSet *)values;
- (void)removeLists:(NSSet *)values;

- (void)addMessagesObject:(Message *)value;
- (void)removeMessagesObject:(Message *)value;
- (void)addMessages:(NSSet *)values;
- (void)removeMessages:(NSSet *)values;

@end
