//
//  AppDelegate.h
//  SignatureCapture
//
//  Created by Jude Jonassaint on 10/31/15.
//  Copyright © 2015 Sicklesoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

/*
 #import "MyViewController.h"
 
 @interface SignatureCaptureAppDelegate : UIResponder <UIApplicationDelegate>
 
 @property (strong, nonatomic) UIWindow *window;
 @property (strong, nonatomic) UINavigationController *navigationController;
 @property (strong, nonatomic) MyViewController *myViewController;
 
 @end
*/