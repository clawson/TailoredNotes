//
//  Measurement.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Measurement : NSManagedObject

@property (nonatomic, retain) NSNumber * bust;
@property (nonatomic, retain) NSNumber * height;
@property (nonatomic, retain) NSNumber * hips;
@property (nonatomic, retain) NSNumber * inseam;
@property (nonatomic, retain) NSNumber * napeToWaist;
@property (nonatomic, retain) NSNumber * neck;
@property (nonatomic, retain) NSNumber * rise;
@property (nonatomic, retain) NSNumber * shoulders;
@property (nonatomic, retain) NSNumber * shoulderToWrist;
@property (nonatomic, retain) NSNumber * shoulderToElbow;
@property (nonatomic, retain) NSNumber * thigh;
@property (nonatomic, retain) NSNumber * waist;
@property (nonatomic, retain) NSNumber * weight;
@property (nonatomic, retain) NSManagedObject *orderToMeasurement;
@property (nonatomic, retain) NSManagedObject *personToMeasurement;

@end
