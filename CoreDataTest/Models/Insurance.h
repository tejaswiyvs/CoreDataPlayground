//
//  Insurance.h
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Insurance : NSManagedObject

@property (nonatomic, retain) NSString * insuranceCompany;
@property (nonatomic, retain) NSString * groupNumber;
@property (nonatomic, retain) NSString * planNumber;
@property (nonatomic, retain) NSNumber * orderId;
@property (nonatomic, retain) NSManagedObject *member;

@end
