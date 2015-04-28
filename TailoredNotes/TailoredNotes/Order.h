//
//  Order.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Measurement, NSManagedObject;

@interface Order : NSManagedObject

@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSNumber * reminder;
@property (nonatomic, retain) NSDate * reminderDate;
@property (nonatomic, retain) NSDate * startDate;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSSet *itemsInOrder;
@property (nonatomic, retain) Measurement *measurementForOrder;
@property (nonatomic, retain) NSManagedObject *personForOrder;
@end

@interface Order (CoreDataGeneratedAccessors)

- (void)addItemsInOrderObject:(NSManagedObject *)value;
- (void)removeItemsInOrderObject:(NSManagedObject *)value;
- (void)addItemsInOrder:(NSSet *)values;
- (void)removeItemsInOrder:(NSSet *)values;

@end
