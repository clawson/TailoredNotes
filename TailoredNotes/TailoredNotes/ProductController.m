//
//  ProductController.m
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import "ProductController.h"
#import "Stack.h"

@implementation ProductController

+ (ProductController *) sharedInstance {
    static ProductController *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[ProductController alloc] init];
    });
    return sharedInstance;
}

#pragma mark - Create

- (Product *) createProductWithName:(NSString *)name notes:(NSString *)notes price:(NSNumber *)price {
    Product *product = [NSEntityDescription insertNewObjectForEntityForName:@"Product" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];

    product.name = name;
    product.note = notes;
    product.price = price;
    
    [self saveToPersistentStorage];
    
    return product;

}


# pragma mark - Read

- (NSArray *) products {
    NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"Product"];
    return [[Stack sharedInstance].managedObjectContext executeFetchRequest:request error:nil];
}

# pragma mark - Update

# pragma mark - Delete

- (void) deleteProduct: (Product *) product {
    [product.managedObjectContext deleteObject:product];
    [self saveToPersistentStorage];
}

# pragma mark - Utility

- (void) save {
    // This is the "friendly" method name exposed in the interface
    
    [self saveToPersistentStorage];
}

- (void) saveToPersistentStorage {
    [[Stack sharedInstance].managedObjectContext save:nil];
}

@end
