//
//  OrderItemController.m
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import "OrderItemController.h"
#import "OrderItem.h"
#import "Stack.h"

@implementation OrderItemController

+ (OrderItemController *) sharedInstance {
    static OrderItemController *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[OrderItemController alloc] init];
    });
    return sharedInstance;
}

#pragma mark - Create

- (OrderItem *) createOrderItemWithProduct: (Product *) product order: (Order *) order price: (NSNumber *) price note: (NSString *) note {
    OrderItem *orderItem = [NSEntityDescription insertNewObjectForEntityForName:@"OrderItem" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
    
    orderItem.productForItem = product;
    orderItem.orderForItem = order;
    orderItem.price = price;
    orderItem.note = note;
    
    [self saveToPersistentStorage];
    
    return orderItem;
}

#pragma mark - Read

#pragma mark - Update

#pragma mark - Delete

- (void) deleteOrderItem: (OrderItem *) orderItem {
    [orderItem.managedObjectContext deleteObject:orderItem];
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
