// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYPhysician.h instead.

#import <CoreData/CoreData.h>
#import "TYPerson.h"

extern const struct TYPhysicianAttributes {
	__unsafe_unretained NSString *npi;
} TYPhysicianAttributes;

extern const struct TYPhysicianRelationships {
	__unsafe_unretained NSString *appointments;
	__unsafe_unretained NSString *practice;
} TYPhysicianRelationships;

extern const struct TYPhysicianFetchedProperties {
} TYPhysicianFetchedProperties;

@class TYAppointment;
@class TYPractice;



@interface TYPhysicianID : NSManagedObjectID {}
@end

@interface _TYPhysician : TYPerson {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYPhysicianID*)objectID;





@property (nonatomic, strong) NSString* npi;



//- (BOOL)validateNpi:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYAppointment *appointments;

//- (BOOL)validateAppointments:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet *practice;

- (NSMutableSet*)practiceSet;





@end

@interface _TYPhysician (CoreDataGeneratedAccessors)

- (void)addPractice:(NSSet*)value_;
- (void)removePractice:(NSSet*)value_;
- (void)addPracticeObject:(TYPractice*)value_;
- (void)removePracticeObject:(TYPractice*)value_;

@end

@interface _TYPhysician (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveNpi;
- (void)setPrimitiveNpi:(NSString*)value;





- (TYAppointment*)primitiveAppointments;
- (void)setPrimitiveAppointments:(TYAppointment*)value;



- (NSMutableSet*)primitivePractice;
- (void)setPrimitivePractice:(NSMutableSet*)value;


@end
