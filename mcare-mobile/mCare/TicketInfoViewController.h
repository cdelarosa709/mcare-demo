//
//  TicketInfoTableViewController.h
//  mCare
//
//  Created by Bob Webster on 12/20/14.
//  Copyright (c) 2014 vca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Ticket.h"

@interface TicketInfoViewController : UITableViewController

@property (strong, nonatomic) Ticket* ticket;
@end
