//
//  OrderItemController.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OrderItem.h"
#import "Product.h"


@interface OrderItemController : NSObject

@property (nonatomic, strong, readonly) NSArray *orderItems;

+ (OrderItemController *) sharedInstance;

- (OrderItem *) createOrderItemWithProduct: (Product *) product order: (Order *) order price: (NSNumber *) price note: (NSString *) note;
- (void) save;
- (void) deleteOrderItem: (OrderItem *) orderItem;

@end
