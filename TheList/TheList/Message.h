//
//  Message.h
//  TheList
//
//  Created by Anne Lindsley on 4/6/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Message : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSString * response;
@property (nonatomic, retain) NSManagedObject *list;
@property (nonatomic, retain) NSSet *admins;
@end

@interface Message (CoreDataGeneratedAccessors)

- (void)addAdminsObject:(NSManagedObject *)value;
- (void)removeAdminsObject:(NSManagedObject *)value;
- (void)addAdmins:(NSSet *)values;
- (void)removeAdmins:(NSSet *)values;

@end
