//
//  Person.h
//  AuditableEntityExample
//
//  Created by Joshua Rasmussen on 11/3/16.
//  Copyright © 2016 Joshua Rasmussen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JRAuditableEntityUI/JRAuditableEntityUI.h>

@class Device;
@class Pet;

@interface Person : NSObject<JRVerifiableEntityProtocol, JRDiffableEntityProtocol>

@property (nonatomic, strong) NSNumber *_id;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *age;
@property (nonatomic, strong) Device *device;
@property (nonatomic, strong) NSArray<Pet *> *pets;

@end
