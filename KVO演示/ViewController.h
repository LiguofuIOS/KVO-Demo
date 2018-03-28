//
//  ViewController.h
//  KVO演示
//
//  Created by liguofu on 2018/3/24.
//  Copyright © 2018年 李国付. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeNum:(UIButton *)sender;

@end

