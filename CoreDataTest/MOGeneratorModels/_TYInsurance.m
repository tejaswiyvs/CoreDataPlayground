// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYInsurance.m instead.

#import "_TYInsurance.h"

const struct TYInsuranceAttributes TYInsuranceAttributes = {
	.groupNumber = @"groupNumber",
	.insuranceCompany = @"insuranceCompany",
	.orderId = @"orderId",
	.planNumber = @"planNumber",
};

const struct TYInsuranceRelationships TYInsuranceRelationships = {
	.member = @"member",
};

const struct TYInsuranceFetchedProperties TYInsuranceFetchedProperties = {
};

@implementation TYInsuranceID
@end

@implementation _TYInsurance

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Insurance" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Insurance";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Insurance" inManagedObjectContext:moc_];
}

- (TYInsuranceID*)objectID {
	return (TYInsuranceID*)[super objectID];
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




@dynamic groupNumber;






@dynamic insuranceCompany;






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





@dynamic planNumber;






@dynamic member;

	






@end
