//
//  JobItemTableViewCell.h
//  bazr
//
//  Created by Jiang on 3/27/15.
//  Copyright (c) 2015 KZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JobItemTableViewCell : UITableViewCell
@property (nonatomic, retain) IBOutlet UILabel* labelTitle;

@property (nonatomic, retain) IBOutlet UILabel* labelDescription;


@property (nonatomic, retain) IBOutlet UILabel* labelBadge;
@end
