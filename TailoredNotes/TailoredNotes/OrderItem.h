//
//  OrderItem.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/25/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Order, Product;

@interface OrderItem : NSManagedObject

@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSString * note;
@property (nonatomic, retain) Order *order;
@property (nonatomic, retain) Product *product;

@end
