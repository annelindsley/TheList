//
//  Message.h
//  TheList
//
//  Created by Anne Lindsley on 4/9/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Admin, List;

@interface Message : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSString * response;
@property (nonatomic, retain) NSSet *admins;
@property (nonatomic, retain) List *list;
@end

@interface Message (CoreDataGeneratedAccessors)

- (void)addAdminsObject:(Admin *)value;
- (void)removeAdminsObject:(Admin *)value;
- (void)addAdmins:(NSSet *)values;
- (void)removeAdmins:(NSSet *)values;

@end
