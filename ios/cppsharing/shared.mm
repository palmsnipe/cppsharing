//
//  shared.m
//  cppsharing
//
//  Created by Cyril Moralès on 24/11/15.
//  Copyright © 2015 Cyril Moralès. All rights reserved.
//

#import "shared.h"
#import "mylib.h"

@implementation MyLib

+ (NSString*) hello
{
    return [NSString stringWithUTF8String:helloworld().c_str()];
}
@end