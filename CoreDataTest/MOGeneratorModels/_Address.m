// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Address.m instead.

#import "_Address.h"

const struct AddressAttributes AddressAttributes = {
	.address1 = @"address1",
	.address2 = @"address2",
	.city = @"city",
	.state = @"state",
	.zip = @"zip",
};

const struct AddressRelationships AddressRelationships = {
	.person = @"person",
	.practice = @"practice",
};

const struct AddressFetchedProperties AddressFetchedProperties = {
};

@implementation AddressID
@end

@implementation _Address

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Address" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Address";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Address" inManagedObjectContext:moc_];
}

- (AddressID*)objectID {
	return (AddressID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic address1;






@dynamic address2;






@dynamic city;






@dynamic state;






@dynamic zip;






@dynamic person;

	

@dynamic practice;

	






@end
