//
//  AppDelegate.h
//  ContactSample
//
//  Created by 智行 栩平 on 12/06/07.
//  Copyright (c) 2012年 aguuu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@end
