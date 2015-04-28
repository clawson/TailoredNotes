//
//  MeasurementController.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Measurement.h"
#import "Person.h"

@interface MeasurementController : NSObject

@property (nonatomic, strong, readonly) NSArray *measurements;

+ (MeasurementController *) sharedInstance;

- (Measurement *) createMeasurementForPerson: (Person *) person;
- (void) save;

@end
