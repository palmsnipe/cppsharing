//
//  shared.m
//  cppsharing
//
//  Created by Cyril Moralès on 24/11/15.
//  Copyright © 2015 Cyril Moralès. All rights reserved.
//

#import "shared.h"
#import "mylib.h"

@implementation Performance_ObjCtoCPlusPlus

+ (void) sortArrayCPlusPlus: (NSInteger) array_size
{
    Performance_CPlusPlus::sortArray((unsigned int)array_size);
}
@end