//
//  Guest+methods.h
//  TheList
//
//  Created by Anne Lindsley on 4/6/14.
//  Copyright (c) 2014 Learning FIS. All rights reserved.
//

#import "Guest.h"

@interface Guest (methods)

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
                       inContext: (NSManagedObjectContext *)context;

@end
