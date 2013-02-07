//
//  DetailViewController.h
//  MyNotes
//
//  Created by Eric Zeng on 13-2-7.
//  Copyright (c) 2013年 Yuhan Zeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
