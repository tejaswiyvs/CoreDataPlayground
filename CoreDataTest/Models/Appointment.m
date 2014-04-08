//
//  Appointment.m
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import "Appointment.h"


@implementation Appointment

@dynamic member;

- (void)awakeFromFetch {
    NSLog(@"Fetched");
}

- (void)awakeFromInsert {
    NSLog(@"Inserted");
}

- (void)didTurnIntoFault {
    NSLog(@"Faulted");
}

@end
