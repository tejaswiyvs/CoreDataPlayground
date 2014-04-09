// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYEmergencyContact.m instead.

#import "_TYEmergencyContact.h"

const struct TYEmergencyContactAttributes TYEmergencyContactAttributes = {
	.orderId = @"orderId",
};

const struct TYEmergencyContactRelationships TYEmergencyContactRelationships = {
	.member = @"member",
};

const struct TYEmergencyContactFetchedProperties TYEmergencyContactFetchedProperties = {
};

@implementation TYEmergencyContactID
@end

@implementation _TYEmergencyContact

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"EmergencyContact" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"EmergencyContact";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"EmergencyContact" inManagedObjectContext:moc_];
}

- (TYEmergencyContactID*)objectID {
	return (TYEmergencyContactID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	
	if ([key isEqualToString:@"orderIdValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"orderId"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
		return keyPaths;
	}

	return keyPaths;
}




@dynamic orderId;



- (int32_t)orderIdValue {
	NSNumber *result = [self orderId];
	return [result intValue];
}

- (void)setOrderIdValue:(int32_t)value_ {
	[self setOrderId:[NSNumber numberWithInt:value_]];
}

- (int32_t)primitiveOrderIdValue {
	NSNumber *result = [self primitiveOrderId];
	return [result intValue];
}

- (void)setPrimitiveOrderIdValue:(int32_t)value_ {
	[self setPrimitiveOrderId:[NSNumber numberWithInt:value_]];
}





@dynamic member;

	






@end
