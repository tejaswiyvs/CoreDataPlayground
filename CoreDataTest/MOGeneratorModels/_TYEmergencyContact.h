// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYEmergencyContact.h instead.

#import <CoreData/CoreData.h>
#import "TYPerson.h"

extern const struct TYEmergencyContactAttributes {
	__unsafe_unretained NSString *orderId;
} TYEmergencyContactAttributes;

extern const struct TYEmergencyContactRelationships {
	__unsafe_unretained NSString *member;
} TYEmergencyContactRelationships;

extern const struct TYEmergencyContactFetchedProperties {
} TYEmergencyContactFetchedProperties;

@class TYMember;



@interface TYEmergencyContactID : NSManagedObjectID {}
@end

@interface _TYEmergencyContact : TYPerson {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYEmergencyContactID*)objectID;





@property (nonatomic, strong) NSNumber* orderId;



@property int32_t orderIdValue;
- (int32_t)orderIdValue;
- (void)setOrderIdValue:(int32_t)value_;

//- (BOOL)validateOrderId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYMember *member;

//- (BOOL)validateMember:(id*)value_ error:(NSError**)error_;





@end

@interface _TYEmergencyContact (CoreDataGeneratedAccessors)

@end

@interface _TYEmergencyContact (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveOrderId;
- (void)setPrimitiveOrderId:(NSNumber*)value;

- (int32_t)primitiveOrderIdValue;
- (void)setPrimitiveOrderIdValue:(int32_t)value_;





- (TYMember*)primitiveMember;
- (void)setPrimitiveMember:(TYMember*)value;


@end
