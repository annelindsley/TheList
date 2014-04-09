//
//  Guest.h
//  TheList
//
//  Created by Anne Lindsley on 4/9/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class List;

@interface Guest : NSManagedObject

@property (nonatomic, retain) NSString * addedBy;
@property (nonatomic, retain) NSString * company;
@property (nonatomic, retain) NSDate * dateAdded;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * facebook;
@property (nonatomic, retain) NSString * instagram;
@property (nonatomic, retain) NSString * jobTitle;
@property (nonatomic, retain) NSString * linkedIn;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSString * numberInParty;
@property (nonatomic, retain) NSString * phoneNumber;
@property (nonatomic, retain) NSString * preciousPerson;
@property (nonatomic, retain) NSString * twitter;
@property (nonatomic, retain) NSString * typeOfAccess;
@property (nonatomic, retain) List *list;

@end
