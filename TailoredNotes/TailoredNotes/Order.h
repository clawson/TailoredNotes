//
//  Order.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/25/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Order : NSManagedObject

@property (nonatomic, retain) NSDate * startDate;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSNumber * reminder;
@property (nonatomic, retain) NSDate * reminderDate;
@property (nonatomic, retain) NSSet *itemsInOrder;
@property (nonatomic, retain) NSManagedObject *personForOrder;
@end

@interface Order (CoreDataGeneratedAccessors)

- (void)addItemsInOrderObject:(NSManagedObject *)value;
- (void)removeItemsInOrderObject:(NSManagedObject *)value;
- (void)addItemsInOrder:(NSSet *)values;
- (void)removeItemsInOrder:(NSSet *)values;

@end
