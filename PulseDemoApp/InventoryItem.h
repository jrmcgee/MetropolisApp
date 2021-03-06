//
//  InventoryItem.h
//  PulseDemoApp
//
//  Created by crnorman on 2/9/14.
//  Copyright (c) 2014 IBM MIL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InventoryItem : NSObject
@property (strong)NSString *name;
@property (strong)NSString *description;
@property (strong)NSString *inStock;
@property (strong)NSString *category;
@property (strong)NSArray  *sizes;
@property (strong)NSString *img;
@property (strong)NSString *price;
@end
