//
//  PersonController.m
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import "PersonController.h"
#import "Stack.h"

@implementation PersonController

+ (PersonController *) sharedInstance {
    static PersonController *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[PersonController alloc] init];
    });
    return sharedInstance;
}

#pragma mark - Create

- (Person *) createPersonWithFirstName: (NSString *) firstName lastName: (NSString *) lastName {
    Person *person = [NSEntityDescription insertNewObjectForEntityForName:@"Person" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
    
    person.firstName = firstName;
    person.lastName = lastName;
    
    [self saveToPersistentStorage];
    return person;
}

#pragma mark - Read

#pragma mark - Update

- (Person *) setEmailForPerson: (Person *) person email: (NSString *) email {
    // Do I need to load this specific person from the data set to add the email address?
    // If so, how to do find a single entry when using CoreData?
    person.email = email;
    [self saveToPersistentStorage];
    return person;
}

- (Person *) setPhoneForPerson: (Person *) person phone: (NSString *) phone {
    // see note in setEmailForPerson:email
    person.phone = phone;
    [self saveToPersistentStorage];
    return person;
}

#pragma mark - Delete

- (void) deletePerson: (Person *) person {
    [person.managedObjectContext deleteObject:person];
    [self saveToPersistentStorage];
}

#pragma mark - Utility

- (void) save {
    // This is the "friendly" method name exposed in the interface
    [self saveToPersistentStorage];
}

- (void) saveToPersistentStorage {
    [[Stack sharedInstance].managedObjectContext save:nil];
}

@end
