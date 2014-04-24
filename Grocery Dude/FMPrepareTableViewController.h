//
//  FMPrepareTableViewController.h
//  Grocery Dude
//
//  Created by Fredrick Myers on 4/23/14.
//  Copyright (c) 2014 Fredrick Myers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTableViewController.h"

@interface FMPrepareTableViewController : CoreDataTableViewController <UIActionSheetDelegate>

@property (strong, nonatomic) UIActionSheet *clearConfirmActionSheet;

@end
