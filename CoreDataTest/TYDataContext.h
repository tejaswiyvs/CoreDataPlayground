//
//  TYDataContext.h
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TYDataContext : NSObject

+ (TYDataContext *)sharedInstance;

- (NSManagedObjectContext *)managedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
