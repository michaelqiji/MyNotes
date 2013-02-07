//
//  MasterViewController.h
//  MyNotes
//
//  Created by Eric Zeng on 13-2-7.
//  Copyright (c) 2013年 Yuhan Zeng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
