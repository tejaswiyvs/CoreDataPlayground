// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYMember.h instead.

#import <CoreData/CoreData.h>
#import "TYPerson.h"

extern const struct TYMemberAttributes {
} TYMemberAttributes;

extern const struct TYMemberRelationships {
	__unsafe_unretained NSString *appointments;
	__unsafe_unretained NSString *emergencyContacts;
	__unsafe_unretained NSString *guarantors;
	__unsafe_unretained NSString *insurances;
} TYMemberRelationships;

extern const struct TYMemberFetchedProperties {
} TYMemberFetchedProperties;

@class TYAppointment;
@class TYEmergencyContact;
@class TYGuarantor;
@class TYInsurance;


@interface TYMemberID : NSManagedObjectID {}
@end

@interface _TYMember : TYPerson {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYMemberID*)objectID;





@property (nonatomic, strong) NSSet *appointments;

- (NSMutableSet*)appointmentsSet;




@property (nonatomic, strong) NSSet *emergencyContacts;

- (NSMutableSet*)emergencyContactsSet;




@property (nonatomic, strong) NSSet *guarantors;

- (NSMutableSet*)guarantorsSet;




@property (nonatomic, strong) NSSet *insurances;

- (NSMutableSet*)insurancesSet;





@end

@interface _TYMember (CoreDataGeneratedAccessors)

- (void)addAppointments:(NSSet*)value_;
- (void)removeAppointments:(NSSet*)value_;
- (void)addAppointmentsObject:(TYAppointment*)value_;
- (void)removeAppointmentsObject:(TYAppointment*)value_;

- (void)addEmergencyContacts:(NSSet*)value_;
- (void)removeEmergencyContacts:(NSSet*)value_;
- (void)addEmergencyContactsObject:(TYEmergencyContact*)value_;
- (void)removeEmergencyContactsObject:(TYEmergencyContact*)value_;

- (void)addGuarantors:(NSSet*)value_;
- (void)removeGuarantors:(NSSet*)value_;
- (void)addGuarantorsObject:(TYGuarantor*)value_;
- (void)removeGuarantorsObject:(TYGuarantor*)value_;

- (void)addInsurances:(NSSet*)value_;
- (void)removeInsurances:(NSSet*)value_;
- (void)addInsurancesObject:(TYInsurance*)value_;
- (void)removeInsurancesObject:(TYInsurance*)value_;

@end

@interface _TYMember (CoreDataGeneratedPrimitiveAccessors)



- (NSMutableSet*)primitiveAppointments;
- (void)setPrimitiveAppointments:(NSMutableSet*)value;



- (NSMutableSet*)primitiveEmergencyContacts;
- (void)setPrimitiveEmergencyContacts:(NSMutableSet*)value;



- (NSMutableSet*)primitiveGuarantors;
- (void)setPrimitiveGuarantors:(NSMutableSet*)value;



- (NSMutableSet*)primitiveInsurances;
- (void)setPrimitiveInsurances:(NSMutableSet*)value;


@end
