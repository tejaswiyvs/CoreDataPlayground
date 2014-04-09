// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYGuarantor.m instead.

#import "_TYGuarantor.h"

const struct TYGuarantorAttributes TYGuarantorAttributes = {
	.orderId = @"orderId",
};

const struct TYGuarantorRelationships TYGuarantorRelationships = {
	.member = @"member",
};

const struct TYGuarantorFetchedProperties TYGuarantorFetchedProperties = {
};

@implementation TYGuarantorID
@end

@implementation _TYGuarantor

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Guarantor" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Guarantor";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Guarantor" inManagedObjectContext:moc_];
}

- (TYGuarantorID*)objectID {
	return (TYGuarantorID*)[super objectID];
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
