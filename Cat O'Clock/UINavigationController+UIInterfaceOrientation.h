//
//  UINavigationController+UIInterfaceOrientation.h
//  Cat O'Clock
//
//  Created by Kiara Robles on 2/24/16.
//  Copyright © 2016 kiaraRobles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (UIInterfaceOrientation)

- (BOOL)shouldAutorotate;
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

@end
