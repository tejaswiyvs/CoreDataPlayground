//
//  Member.m
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import "Member.h"
#import "Appointment.h"
#import "Insurance.h"


@implementation Member

@dynamic insurances;
@dynamic emergencyContacts;
@dynamic guarantors;
@dynamic appointments;

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
