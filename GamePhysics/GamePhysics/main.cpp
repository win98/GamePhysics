//
//  main.cpp
//  GamePhysics
//
//  Created by Sergey on 1/21/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#include <iostream>
#include "PHVector.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    PHVec3d v1(0, 1, 0);
    PHVec3d v2(1, 0, 0);
    PHVec3d v3;
    PHVec3d v4;
    v3 = v1;
    v3 = v1 + v2;
    
    return 0;
}
