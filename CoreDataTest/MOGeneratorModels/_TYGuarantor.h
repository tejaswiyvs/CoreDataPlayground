// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYGuarantor.h instead.

#import <CoreData/CoreData.h>
#import "TYPerson.h"

extern const struct TYGuarantorAttributes {
	__unsafe_unretained NSString *orderId;
} TYGuarantorAttributes;

extern const struct TYGuarantorRelationships {
	__unsafe_unretained NSString *member;
} TYGuarantorRelationships;

extern const struct TYGuarantorFetchedProperties {
} TYGuarantorFetchedProperties;

@class TYMember;



@interface TYGuarantorID : NSManagedObjectID {}
@end

@interface _TYGuarantor : TYPerson {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYGuarantorID*)objectID;





@property (nonatomic, strong) NSNumber* orderId;



@property int32_t orderIdValue;
- (int32_t)orderIdValue;
- (void)setOrderIdValue:(int32_t)value_;

//- (BOOL)validateOrderId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYMember *member;

//- (BOOL)validateMember:(id*)value_ error:(NSError**)error_;





@end

@interface _TYGuarantor (CoreDataGeneratedAccessors)

@end

@interface _TYGuarantor (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveOrderId;
- (void)setPrimitiveOrderId:(NSNumber*)value;

- (int32_t)primitiveOrderIdValue;
- (void)setPrimitiveOrderIdValue:(int32_t)value_;





- (TYMember*)primitiveMember;
- (void)setPrimitiveMember:(TYMember*)value;


@end
