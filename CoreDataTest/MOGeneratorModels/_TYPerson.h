// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPerson.h instead.

#import <CoreData/CoreData.h>


extern const struct TYPersonAttributes {
	__unsafe_unretained NSString *birthDate;
	__unsafe_unretained NSString *firstName;
	__unsafe_unretained NSString *lastName;
	__unsafe_unretained NSString *profilePicture;
} TYPersonAttributes;

extern const struct TYPersonRelationships {
	__unsafe_unretained NSString *address;
} TYPersonRelationships;

extern const struct TYPersonFetchedProperties {
} TYPersonFetchedProperties;

@class Address;






@interface TYPersonID : NSManagedObjectID {}
@end

@interface _TYPerson : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYPersonID*)objectID;





@property (nonatomic, strong) NSDate* birthDate;



//- (BOOL)validateBirthDate:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* firstName;



//- (BOOL)validateFirstName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* lastName;



//- (BOOL)validateLastName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSData* profilePicture;



//- (BOOL)validateProfilePicture:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Address *address;

//- (BOOL)validateAddress:(id*)value_ error:(NSError**)error_;





@end

@interface _TYPerson (CoreDataGeneratedAccessors)

@end

@interface _TYPerson (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveBirthDate;
- (void)setPrimitiveBirthDate:(NSDate*)value;




- (NSString*)primitiveFirstName;
- (void)setPrimitiveFirstName:(NSString*)value;




- (NSString*)primitiveLastName;
- (void)setPrimitiveLastName:(NSString*)value;




- (NSData*)primitiveProfilePicture;
- (void)setPrimitiveProfilePicture:(NSData*)value;





- (Address*)primitiveAddress;
- (void)setPrimitiveAddress:(Address*)value;


@end
