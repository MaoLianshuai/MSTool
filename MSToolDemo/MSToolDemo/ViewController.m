//
//  ViewController.m
//  MSToolDemo
//
//  Created by iOS on 2020/6/3.
//  Copyright © 2020 mls. All rights reserved.
//

#import "ViewController.h"
#import <MSTool/MSDebugFPSButton.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
#ifdef DEBUG
    [MSDebugFPSButton showFPSButton];
#endif
}


@end
