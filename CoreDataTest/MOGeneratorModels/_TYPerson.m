// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPerson.m instead.

#import "_TYPerson.h"

const struct TYPersonAttributes TYPersonAttributes = {
	.birthDate = @"birthDate",
	.firstName = @"firstName",
	.lastName = @"lastName",
	.profilePicture = @"profilePicture",
};

const struct TYPersonRelationships TYPersonRelationships = {
	.address = @"address",
};

const struct TYPersonFetchedProperties TYPersonFetchedProperties = {
};

@implementation TYPersonID
@end

@implementation _TYPerson

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Person" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Person";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Person" inManagedObjectContext:moc_];
}

- (TYPersonID*)objectID {
	return (TYPersonID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic birthDate;






@dynamic firstName;






@dynamic lastName;






@dynamic profilePicture;






@dynamic address;

	






@end
