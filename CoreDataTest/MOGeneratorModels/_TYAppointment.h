// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TYAppointment.h instead.

#import <CoreData/CoreData.h>


extern const struct TYAppointmentAttributes {
	__unsafe_unretained NSString *appointmentDateTime;
	__unsafe_unretained NSString *service;
} TYAppointmentAttributes;

extern const struct TYAppointmentRelationships {
	__unsafe_unretained NSString *member;
	__unsafe_unretained NSString *physician;
	__unsafe_unretained NSString *practice;
} TYAppointmentRelationships;

extern const struct TYAppointmentFetchedProperties {
} TYAppointmentFetchedProperties;

@class TYMember;
@class TYPhysician;
@class TYPractice;




@interface TYAppointmentID : NSManagedObjectID {}
@end

@interface _TYAppointment : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TYAppointmentID*)objectID;





@property (nonatomic, strong) NSDate* appointmentDateTime;



//- (BOOL)validateAppointmentDateTime:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* service;



//- (BOOL)validateService:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) TYMember *member;

//- (BOOL)validateMember:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) TYPhysician *physician;

//- (BOOL)validatePhysician:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) TYPractice *practice;

//- (BOOL)validatePractice:(id*)value_ error:(NSError**)error_;





@end

@interface _TYAppointment (CoreDataGeneratedAccessors)

@end

@interface _TYAppointment (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveAppointmentDateTime;
- (void)setPrimitiveAppointmentDateTime:(NSDate*)value;




- (NSString*)primitiveService;
- (void)setPrimitiveService:(NSString*)value;





- (TYMember*)primitiveMember;
- (void)setPrimitiveMember:(TYMember*)value;



- (TYPhysician*)primitivePhysician;
- (void)setPrimitivePhysician:(TYPhysician*)value;



- (TYPractice*)primitivePractice;
- (void)setPrimitivePractice:(TYPractice*)value;


@end
