//
//  Member.h
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Person.h"

@class Appointment, Insurance;

@interface Member : Person

@property (nonatomic, retain) NSSet *insurances;
@property (nonatomic, retain) NSSet *emergencyContacts;
@property (nonatomic, retain) NSSet *guarantors;
@property (nonatomic, retain) NSSet *appointments;
@end

@interface Member (CoreDataGeneratedAccessors)

- (void)addInsurancesObject:(Insurance *)value;
- (void)removeInsurancesObject:(Insurance *)value;
- (void)addInsurances:(NSSet *)values;
- (void)removeInsurances:(NSSet *)values;

- (void)addEmergencyContactsObject:(NSManagedObject *)value;
- (void)removeEmergencyContactsObject:(NSManagedObject *)value;
- (void)addEmergencyContacts:(NSSet *)values;
- (void)removeEmergencyContacts:(NSSet *)values;

- (void)addGuarantorsObject:(NSManagedObject *)value;
- (void)removeGuarantorsObject:(NSManagedObject *)value;
- (void)addGuarantors:(NSSet *)values;
- (void)removeGuarantors:(NSSet *)values;

- (void)addAppointmentsObject:(Appointment *)value;
- (void)removeAppointmentsObject:(Appointment *)value;
- (void)addAppointments:(NSSet *)values;
- (void)removeAppointments:(NSSet *)values;

@end
