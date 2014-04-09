// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYAppointment.m instead.

#import "_TYAppointment.h"

const struct TYAppointmentAttributes TYAppointmentAttributes = {
	.appointmentDateTime = @"appointmentDateTime",
	.service = @"service",
};

const struct TYAppointmentRelationships TYAppointmentRelationships = {
	.member = @"member",
	.physician = @"physician",
	.practice = @"practice",
};

const struct TYAppointmentFetchedProperties TYAppointmentFetchedProperties = {
};

@implementation TYAppointmentID
@end

@implementation _TYAppointment

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Appointment" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Appointment";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Appointment" inManagedObjectContext:moc_];
}

- (TYAppointmentID*)objectID {
	return (TYAppointmentID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic appointmentDateTime;






@dynamic service;






@dynamic member;

	

@dynamic physician;

	

@dynamic practice;

	






@end
