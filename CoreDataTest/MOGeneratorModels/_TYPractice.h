// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPractice.h instead.

#import <CoreData/CoreData.h>


extern const struct TYPracticeAttributes {
	__unsafe_unretained NSString *practiceName;
} TYPracticeAttributes;

extern const struct TYPracticeRelationships {
	__unsafe_unretained NSString *address;
	__unsafe_unretained NSString *appointments;
	__unsafe_unretained NSString *physician;
} TYPracticeRelationships;

extern const struct TYPracticeFetchedProperties {
} TYPracticeFetchedProperties;

@class Address;
@class TYAppointment;
@class TYPhysician;



@interface TYPracticeID : NSManagedObjectID {}
@end

@interface _TYPractice : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYPracticeID*)objectID;





@property (nonatomic, strong) NSString* practiceName;



//- (BOOL)validatePracticeName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Address *address;

//- (BOOL)validateAddress:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet *appointments;

- (NSMutableSet*)appointmentsSet;




@property (nonatomic, strong) NSSet *physician;

- (NSMutableSet*)physicianSet;





@end

@interface _TYPractice (CoreDataGeneratedAccessors)

- (void)addAppointments:(NSSet*)value_;
- (void)removeAppointments:(NSSet*)value_;
- (void)addAppointmentsObject:(TYAppointment*)value_;
- (void)removeAppointmentsObject:(TYAppointment*)value_;

- (void)addPhysician:(NSSet*)value_;
- (void)removePhysician:(NSSet*)value_;
- (void)addPhysicianObject:(TYPhysician*)value_;
- (void)removePhysicianObject:(TYPhysician*)value_;

@end

@interface _TYPractice (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitivePracticeName;
- (void)setPrimitivePracticeName:(NSString*)value;





- (Address*)primitiveAddress;
- (void)setPrimitiveAddress:(Address*)value;



- (NSMutableSet*)primitiveAppointments;
- (void)setPrimitiveAppointments:(NSMutableSet*)value;



- (NSMutableSet*)primitivePhysician;
- (void)setPrimitivePhysician:(NSMutableSet*)value;


@end
