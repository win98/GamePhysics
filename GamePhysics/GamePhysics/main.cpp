//
//  main.cpp
//  GamePhysics
//
//  Created by Sergey on 1/21/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#include <iostream>

extern "C" {
    #include "PhysicsLib/PHVector.h"
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    PHVec3d v1 = PHVec3dMake(0, 0, 10);
    PHVec3d v2 = PHVec3dMake(10, 0, 0);
    PHVec3d v3;
    PHCrossMul3dDirect(&v2, &v1, &v3);
    
    return 0;
}
