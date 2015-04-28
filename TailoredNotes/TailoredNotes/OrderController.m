//
//  OrderController.m
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import "OrderController.h"
#import "OrderItem.h"
#import "Stack.h"

@implementation OrderController

+ (OrderController *) sharedInstance {
    static OrderController *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[OrderController alloc] init];
    });
    return sharedInstance;
}

#pragma mark - Create

- (Order *) createOrderForPerson: (Person *) person {
    Order *order = [NSEntityDescription insertNewObjectForEntityForName:@"Order" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
    
    order.personForOrder = person;
    
    [self saveToPersistentStorage];
    return order;
}

#pragma mark - Read

#pragma mark - Update

#pragma mark - Delete

- (void) deleteOrder: (Order *) order {
    [order.managedObjectContext deleteObject:order];
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
