// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYMember.m instead.

#import "_TYMember.h"

const struct TYMemberAttributes TYMemberAttributes = {
};

const struct TYMemberRelationships TYMemberRelationships = {
	.appointments = @"appointments",
	.emergencyContacts = @"emergencyContacts",
	.guarantors = @"guarantors",
	.insurances = @"insurances",
};

const struct TYMemberFetchedProperties TYMemberFetchedProperties = {
};

@implementation TYMemberID
@end

@implementation _TYMember

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Member" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Member";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Member" inManagedObjectContext:moc_];
}

- (TYMemberID*)objectID {
	return (TYMemberID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic appointments;

	
- (NSMutableSet*)appointmentsSet {
	[self willAccessValueForKey:@"appointments"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"appointments"];
  
	[self didAccessValueForKey:@"appointments"];
	return result;
}
	

@dynamic emergencyContacts;

	
- (NSMutableSet*)emergencyContactsSet {
	[self willAccessValueForKey:@"emergencyContacts"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"emergencyContacts"];
  
	[self didAccessValueForKey:@"emergencyContacts"];
	return result;
}
	

@dynamic guarantors;

	
- (NSMutableSet*)guarantorsSet {
	[self willAccessValueForKey:@"guarantors"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"guarantors"];
  
	[self didAccessValueForKey:@"guarantors"];
	return result;
}
	

@dynamic insurances;

	
- (NSMutableSet*)insurancesSet {
	[self willAccessValueForKey:@"insurances"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"insurances"];
  
	[self didAccessValueForKey:@"insurances"];
	return result;
}
	






@end
