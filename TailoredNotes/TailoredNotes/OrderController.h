//
//  OrderController.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Order.h"
#import "Person.h"

@interface OrderController : NSObject

@property (nonatomic, strong, readonly) NSArray *orders;

+ (OrderController *) sharedInstance;

- (Order *) createOrderForPerson: (Person *) person;
- (void) save;
- (void) deleteOrder: (Order *) order;

@end
