//
//  Person.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Measurement, Order;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSNumber * gender;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSData * picture;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSString * zip;
@property (nonatomic, retain) NSSet *measurementsForPerson;
@property (nonatomic, retain) NSSet *ordersForPerson;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addMeasurementsForPersonObject:(Measurement *)value;
- (void)removeMeasurementsForPersonObject:(Measurement *)value;
- (void)addMeasurementsForPerson:(NSSet *)values;
- (void)removeMeasurementsForPerson:(NSSet *)values;

- (void)addOrdersForPersonObject:(Order *)value;
- (void)removeOrdersForPersonObject:(Order *)value;
- (void)addOrdersForPerson:(NSSet *)values;
- (void)removeOrdersForPerson:(NSSet *)values;

@end
