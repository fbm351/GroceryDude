//
//  Item.h
//  Grocery Dude
//
//  Created by Fredrick Myers on 4/22/14.
//  Copyright (c) 2014 Fredrick Myers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Item : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * quantity;
@property (nonatomic, retain) NSData * photoData;
@property (nonatomic, retain) NSNumber * listed;
@property (nonatomic, retain) NSNumber * collected;

@end
