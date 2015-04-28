//
//  OrderItem.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject, Order;

@interface OrderItem : NSManagedObject

@property (nonatomic, retain) NSString * note;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) Order *orderForItem;
@property (nonatomic, retain) NSManagedObject *productForItem;

@end
