//
//  Pet.h
//  AuditableEntityExample
//
//  Created by Joshua Rasmussen on 11/3/16.
//  Copyright © 2016 Joshua Rasmussen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JRAuditableEntityUI/JRAuditableEntityUI.h>

@interface Pet : NSObject<JRVerifiableEntityProtocol, JRDiffableEntityProtocol>

@property (nonatomic, strong) NSNumber *_id;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *breed;

@end
