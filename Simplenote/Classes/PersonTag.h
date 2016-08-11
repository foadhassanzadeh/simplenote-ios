//
//  PersonTag.h
//  Simplenote
//
//  Created by Michael Johnston on 11-08-23.
//  Copyright (c) 2011 Codality. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PersonTag : NSObject {
    NSString *name;
    NSString *email;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *email;
@property (nonatomic) BOOL active;

-(id)initWithName:(NSString *)aName email:(NSString *)anEmail;

- (NSComparisonResult)compareName:(PersonTag *)anotherTag;
- (NSComparisonResult)compareEmail:(PersonTag *)anotherTag;


@end
