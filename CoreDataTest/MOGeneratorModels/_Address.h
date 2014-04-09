// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Address.h instead.

#import <CoreData/CoreData.h>


extern const struct AddressAttributes {
	__unsafe_unretained NSString *address1;
	__unsafe_unretained NSString *address2;
	__unsafe_unretained NSString *city;
	__unsafe_unretained NSString *state;
	__unsafe_unretained NSString *zip;
} AddressAttributes;

extern const struct AddressRelationships {
	__unsafe_unretained NSString *person;
	__unsafe_unretained NSString *practice;
} AddressRelationships;

extern const struct AddressFetchedProperties {
} AddressFetchedProperties;

@class TYPerson;
@class TYPractice;







@interface AddressID : NSManagedObjectID {}
@end

@interface _Address : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AddressID*)objectID;





@property (nonatomic, strong) NSString* address1;



//- (BOOL)validateAddress1:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* address2;



//- (BOOL)validateAddress2:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* city;



//- (BOOL)validateCity:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* state;



//- (BOOL)validateState:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* zip;



//- (BOOL)validateZip:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYPerson *person;

//- (BOOL)validatePerson:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) TYPractice *practice;

//- (BOOL)validatePractice:(id*)value_ error:(NSError**)error_;





@end

@interface _Address (CoreDataGeneratedAccessors)

@end

@interface _Address (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveAddress1;
- (void)setPrimitiveAddress1:(NSString*)value;




- (NSString*)primitiveAddress2;
- (void)setPrimitiveAddress2:(NSString*)value;




- (NSString*)primitiveCity;
- (void)setPrimitiveCity:(NSString*)value;




- (NSString*)primitiveState;
- (void)setPrimitiveState:(NSString*)value;




- (NSString*)primitiveZip;
- (void)setPrimitiveZip:(NSString*)value;





- (TYPerson*)primitivePerson;
- (void)setPrimitivePerson:(TYPerson*)value;



- (TYPractice*)primitivePractice;
- (void)setPrimitivePractice:(TYPractice*)value;


@end
