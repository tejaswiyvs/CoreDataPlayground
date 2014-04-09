// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYInsurance.h instead.

#import <CoreData/CoreData.h>


extern const struct TYInsuranceAttributes {
	__unsafe_unretained NSString *groupNumber;
	__unsafe_unretained NSString *insuranceCompany;
	__unsafe_unretained NSString *orderId;
	__unsafe_unretained NSString *planNumber;
} TYInsuranceAttributes;

extern const struct TYInsuranceRelationships {
	__unsafe_unretained NSString *member;
} TYInsuranceRelationships;

extern const struct TYInsuranceFetchedProperties {
} TYInsuranceFetchedProperties;

@class TYMember;






@interface TYInsuranceID : NSManagedObjectID {}
@end

@interface _TYInsurance : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYInsuranceID*)objectID;





@property (nonatomic, strong) NSString* groupNumber;



//- (BOOL)validateGroupNumber:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* insuranceCompany;



//- (BOOL)validateInsuranceCompany:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* orderId;



@property int32_t orderIdValue;
- (int32_t)orderIdValue;
- (void)setOrderIdValue:(int32_t)value_;

//- (BOOL)validateOrderId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* planNumber;



//- (BOOL)validatePlanNumber:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYMember *member;

//- (BOOL)validateMember:(id*)value_ error:(NSError**)error_;





@end

@interface _TYInsurance (CoreDataGeneratedAccessors)

@end

@interface _TYInsurance (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveGroupNumber;
- (void)setPrimitiveGroupNumber:(NSString*)value;




- (NSString*)primitiveInsuranceCompany;
- (void)setPrimitiveInsuranceCompany:(NSString*)value;




- (NSNumber*)primitiveOrderId;
- (void)setPrimitiveOrderId:(NSNumber*)value;

- (int32_t)primitiveOrderIdValue;
- (void)setPrimitiveOrderIdValue:(int32_t)value_;




- (NSString*)primitivePlanNumber;
- (void)setPrimitivePlanNumber:(NSString*)value;





- (TYMember*)primitiveMember;
- (void)setPrimitiveMember:(TYMember*)value;


@end
