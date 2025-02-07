//
//  JSONFirstLevelDict.h
//  Finnkino
//
//  Created by Abdullah Atik on 9/30/13.
//  Copyright (c) 2013 Abdullah Atik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONSerializable.h"

@interface JSONFirstLevelDict : NSObject < JSONSerializable >

//JSON Data structure
@property (nonatomic, strong) NSMutableArray *movieGenreNames;
@property (nonatomic, strong) NSMutableArray *movieItems;

@end
