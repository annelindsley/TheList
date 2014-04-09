//
//  Guest+methods.m
//  TheList
//
//  Created by Anne Lindsley on 4/6/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import "Guest+methods.h"

@interface Guest (methods)

@property (strong, nonatomic) NSArray *guests;

@end

@implementation Guest (methods)

#pragma mark - CRUD Guest Methods

+(instancetype) guestWithAddedBy: (NSString *)addedBy
                         Company: (NSString *)company
                           Email: (NSString *) email
                        Facebook: (NSString *) facebook
                       Instagram: (NSString *) instagram
                        JobTitle: (NSString *) jobTitle
                        LinkedIn: (NSString *) linkedIn
                            Name: (NSString *) name
                           Notes: (NSString *) notes
                   NumberInParty: (NSString *) numberInParty
                     PhoneNumber: (NSString *) phoneNumber
                  PreciousPerson: (NSString *) preciousPerson
                         Twitter: (NSString *) twitter
                    TypeOfAccess: (NSString *) typeOfAccess
                       inContext: (NSManagedObjectContext *)context

{
    
    Guest *newGuest = [NSEntityDescription insertNewObjectForEntityForName:@"Guest" inManagedObjectContext:context];
    if (newGuest) {
        
        newGuest.addedBy = addedBy;
        newGuest.company = company;
        newGuest.dateAdded = [NSDate date];
        newGuest.email = email;
        newGuest.facebook = facebook;
        newGuest.instagram = instagram;
        newGuest.jobTitle = jobTitle;
        newGuest.linkedIn = linkedIn;
        newGuest.name = name;
        newGuest.notes = notes;
        newGuest.numberInParty = numberInParty;
        newGuest.phoneNumber = phoneNumber;
        newGuest.preciousPerson= preciousPerson;
        newGuest.twitter = twitter;
        newGuest.typeOfAccess = typeOfAccess;
        
        
    }
    
    return newGuest;
}



@end
