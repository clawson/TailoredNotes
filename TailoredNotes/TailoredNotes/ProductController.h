//
//  ProductController.h
//  TailoredNotes
//
//  Created by Dan Clawson on 4/28/15.
//  Copyright (c) 2015 Slacker Tools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"

@interface ProductController : NSObject

@property (nonatomic, strong, readonly) NSArray *products;

+ (ProductController *) sharedInstance;

- (Product *) createProductWithName: (NSString *) name notes: (NSString *) notes price: (NSNumber *) price;
- (void) save;
- (void) deleteProduct: (Product *) product;

@end
