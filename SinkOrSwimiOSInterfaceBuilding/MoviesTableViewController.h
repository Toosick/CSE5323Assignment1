#import <UIKit/UIKit.h>
#import "SWRevealViewController.h"

@interface MoviesTableViewController : UITableViewController <UIAlertViewDelegate>

@property (nonatomic, assign) NSInteger categoryCounter;
@property (strong, nonatomic) NSArray *moviesArray;

@property (weak, nonatomic) IBOutlet UINavigationItem *mainNavItem;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;

@end
