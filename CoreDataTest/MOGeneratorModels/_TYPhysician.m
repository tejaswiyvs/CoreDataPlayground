// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPhysician.m instead.

#import "_TYPhysician.h"

const struct TYPhysicianAttributes TYPhysicianAttributes = {
	.npi = @"npi",
};

const struct TYPhysicianRelationships TYPhysicianRelationships = {
	.appointments = @"appointments",
	.practice = @"practice",
};

const struct TYPhysicianFetchedProperties TYPhysicianFetchedProperties = {
};

@implementation TYPhysicianID
@end

@implementation _TYPhysician

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Physician" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Physician";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Physician" inManagedObjectContext:moc_];
}

- (TYPhysicianID*)objectID {
	return (TYPhysicianID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic npi;






@dynamic appointments;

	

@dynamic practice;

	
- (NSMutableSet*)practiceSet {
	[self willAccessValueForKey:@"practice"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"practice"];
  
	[self didAccessValueForKey:@"practice"];
	return result;
}
	






@end
