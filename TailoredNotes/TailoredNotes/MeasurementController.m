//
//  MeasurementController.m
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import "MeasurementController.h"
#import "Stack.h"

@implementation MeasurementController


+ (MeasurementController *) sharedInstance {
    static MeasurementController *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[MeasurementController alloc] init];
    });
    return sharedInstance;
}


#pragma mark - Create

- (Measurement *) createMeasurementForPerson: (Person *) person {
    Measurement *measurement = [NSEntityDescription insertNewObjectForEntityForName:@"Measurement" inManagedObjectContext:[Stack sharedInstance].managedObjectContext];
    
    measurement.personToMeasurement = person;
    
    [self saveToPersistentStorage];
    return measurement;
}

#pragma mark - Read

#pragma mark - Update

#pragma mark - Delete

// We don't want to delete measurements, we want to let these acrue over time.
// BUT... we should give some option to delete the data.
// An archive option?

#pragma mark - Utility

- (void) save {
    // This is the "friendly" method name exposed in the interface
    [self saveToPersistentStorage];
}

- (void) saveToPersistentStorage {
    [[Stack sharedInstance].managedObjectContext save:nil];
}

@end
