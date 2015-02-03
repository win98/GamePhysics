//
//  PHVector.h
//  GamePhysics
//
//  Created by Sergey on 2/3/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#ifndef __GamePhysics__PHVector__
#define __GamePhysics__PHVector__

#include <stdio.h>

typedef float PHScalar;

class PHVec2d
{
public:
    PHVec2d(){x = 0; y = 0;};
    PHVec2d(PHScalar x, PHScalar y) : x(x), y(y) {};
    PHVec2d(const PHVec2d &vec){x = vec.x; y = vec.y;};
    
    PHScalar x;
    PHScalar y;
    
    PHScalar norm();
    PHScalar quadNorm();
    PHVec2d normalize();
    PHScalar scalarMul(PHVec2d &vec);
    
    PHVec2d operator = (PHVec2d &vec);
    PHVec2d operator + (PHVec2d &vec);
    PHVec2d operator - (PHVec2d &vec);
    PHVec2d operator += (PHVec2d &vec);
    PHVec2d operator -= (PHVec2d &vec);
    PHVec2d operator * (PHScalar mul);
    friend PHVec2d operator * (PHScalar mul, PHVec2d &vec);
    PHVec2d operator / (PHScalar div);
    PHVec2d operator *= (PHScalar mul);
    PHVec2d operator /= (PHScalar div);
    
    ~PHVec2d(){};
    
private:
    
};

class PHVec3d
{
public:
    PHVec3d(){x = 0; y = 0; z = 0;};
    PHVec3d(PHScalar x, PHScalar y, PHScalar z) : x(x), y(y), z(z) {};
    PHVec3d(const PHVec3d &vec){x = vec.x; y = vec.y; z = vec.z;};
    
    PHScalar x;
    PHScalar y;
    PHScalar z;
    
    PHScalar norm();
    PHScalar quadNorm();
    PHVec3d normalize();
    PHScalar scalarMul(PHVec3d &vec);
    PHVec3d crossMul(PHVec3d &vec);
    
    PHVec3d operator = (PHVec3d &vec);
    PHVec3d operator + (PHVec3d &vec);
    PHVec3d operator - (PHVec3d &vec);
    PHVec3d operator += (PHVec3d &vec);
    PHVec3d operator -= (PHVec3d &vec);
    PHVec3d operator * (PHScalar mul);
    friend PHVec3d operator * (PHScalar mul, PHVec3d &vec);
    PHVec3d operator / (PHScalar div);
    PHVec3d operator *= (PHScalar mul);
    PHVec3d operator /= (PHScalar div);
    
    ~PHVec3d(){};
    
private:
    
};

#endif /* defined(__GamePhysics__PHVector__) */
