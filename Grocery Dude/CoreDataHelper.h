//
//  CoreDataHelper.h
//  Grocery Dude
//
//  Created by Fredrick Myers on 4/21/14.
//  Copyright (c) 2014 Fredrick Myers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FMMigrationViewController.h"

@interface CoreDataHelper : NSObject

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, retain) FMMigrationViewController *migrationViewController;

- (void)setupCoreData;
- (void)saveContext;

@end
