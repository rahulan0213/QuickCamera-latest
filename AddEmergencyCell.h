//
//  AddEmergencyCell.h
//  QuickCamera
//
//  Created by Arpit on 2/8/16.
//  Copyright © 2016 Apcog. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddEmergencyCell : UITableViewCell
{
    
}



@property(nonatomic,weak)IBOutlet UITextField *txtStudent;
@property(nonatomic,weak)IBOutlet UITextField *txtEmail;
@property(nonatomic,weak)IBOutlet UITextField *txtPhone;
@property(nonatomic,weak)IBOutlet UIButton *btnDelete;
@property(nonatomic,weak)IBOutlet UIView *viewContent;


@end
