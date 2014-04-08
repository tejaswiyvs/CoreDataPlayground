//
//  Guarantor.h
//  CoreDataTest
//
//  Created by Tejaswi on 4/8/14.
//  Copyright (c) 2014 Tejaswi Yerukalapudi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Person.h"

@class Member;

@interface Guarantor : Person

@property (nonatomic, retain) NSNumber * orderId;
@property (nonatomic, retain) Member *member;

@end
