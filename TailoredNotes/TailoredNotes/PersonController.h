//
//  PersonController.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface PersonController : NSObject

@property (nonatomic, strong, readonly) NSArray *people;

+ (PersonController *) sharedInstance;

- (Person *) createPersonWithFirstName: (NSString *) firstName lastName: (NSString *) lastName;
- (Person *) setEmailForPerson: (Person *) person email: (NSString *) email;
- (Person *) setPhoneForPerson: (Person *) person phone: (NSString *) phone;

- (void) save;
- (void) deletePerson: (Person *) person;

@end
