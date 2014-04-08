//
//  Appointment.h
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Appointment : NSManagedObject

@property (nonatomic, retain) NSManagedObject *member;

@end
