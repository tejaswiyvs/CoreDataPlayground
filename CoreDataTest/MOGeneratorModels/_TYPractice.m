// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPractice.m instead.

#import "_TYPractice.h"

const struct TYPracticeAttributes TYPracticeAttributes = {
	.practiceName = @"practiceName",
};

const struct TYPracticeRelationships TYPracticeRelationships = {
	.address = @"address",
	.appointments = @"appointments",
	.physician = @"physician",
};

const struct TYPracticeFetchedProperties TYPracticeFetchedProperties = {
};

@implementation TYPracticeID
@end

@implementation _TYPractice

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Practice" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Practice";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Practice" inManagedObjectContext:moc_];
}

- (TYPracticeID*)objectID {
	return (TYPracticeID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic practiceName;






@dynamic address;

	

@dynamic appointments;

	
- (NSMutableSet*)appointmentsSet {
	[self willAccessValueForKey:@"appointments"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"appointments"];
  
	[self didAccessValueForKey:@"appointments"];
	return result;
}
	

@dynamic physician;

	
- (NSMutableSet*)physicianSet {
	[self willAccessValueForKey:@"physician"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"physician"];
  
	[self didAccessValueForKey:@"physician"];
	return result;
}
	






@end
