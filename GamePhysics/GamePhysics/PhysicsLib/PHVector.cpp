//
//  PHVector.cpp
//  GamePhysics
//
//  Created by Sergey on 2/3/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#include "PHVector.h"
#include "math.h"

PHScalar PHVec2d::norm()
{
    return sqrtf(x * x + y * y);
}

PHScalar PHVec3d::norm()
{
    return sqrtf(x * x + y * y + z * z);
}

PHScalar PHVec2d::quadNorm()
{
    return x * x + y * y;
}

PHScalar PHVec3d::quadNorm()
{
    return x * x + y * y + z * z;
}

PHVec2d PHVec2d::normalize()
{
    PHScalar n = norm();
    
    return PHVec2d(x / n, y / n);
}

PHVec3d PHVec3d::normalize()
{
    PHScalar n = norm();
    
    return PHVec3d(x / n, y / n, z / n);
}

PHScalar PHVec2d::scalarMul(PHVec2d &vec)
{
    return x * vec.x + y * vec.y;
}

PHScalar PHVec3d::scalarMul(PHVec3d &vec)
{
    return x * vec.x + y * vec.y + z * vec.z;
}

PHVec3d PHVec3d::crossMul(PHVec3d &vec)
{
    return PHVec3d(
            y * vec.z - z * vec.y,
            z * vec.x - x * vec.z,
            x * vec.y - y * vec.x);
}

PHVec2d PHVec2d::operator = (PHVec2d &vec)
{
    x = vec.x;
    y = vec.y;
    
    return *this;
}

PHVec3d PHVec3d::operator = (PHVec3d &vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
    
    return *this;
}

PHVec2d PHVec2d::operator + (PHVec2d &vec)
{
    return PHVec2d(x + vec.x, y + vec.y);
}

PHVec3d PHVec3d::operator + (PHVec3d &vec)
{
    return PHVec3d(x + vec.x, y + vec.y, z + vec.z);
}

PHVec2d PHVec2d::operator - (PHVec2d &vec)
{
    return PHVec2d(x - vec.x, y - vec.y);
}

PHVec3d PHVec3d::operator - (PHVec3d &vec)
{
    return PHVec3d(x - vec.x, y - vec.y, z - vec.z);
}

PHVec2d PHVec2d::operator += (PHVec2d &vec)
{
    x += vec.x;
    y += vec.y;
    
    return *this;
}

PHVec3d PHVec3d::operator += (PHVec3d &vec)
{
    x += vec.x;
    y += vec.y;
    z += vec.z;
    
    return *this;
}

PHVec2d PHVec2d::operator -= (PHVec2d &vec)
{
    x -= vec.x;
    y -= vec.y;
    
    return *this;
}

PHVec3d PHVec3d::operator -= (PHVec3d &vec)
{
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
    
    return *this;
}

PHVec2d PHVec2d::operator * (PHScalar mul)
{
    return PHVec2d(x * mul, y * mul);
}

PHVec3d PHVec3d::operator * (PHScalar mul)
{
    return PHVec3d(x * mul, y * mul, z * mul);
}

PHVec2d operator * (PHScalar mul, PHVec2d &vec)
{
    return PHVec2d(vec.x * mul, vec.y * mul);
}

PHVec3d operator * (PHScalar mul, PHVec3d &vec)
{
    return PHVec3d(vec.x * mul, vec.y * mul, vec.z * mul);
}

PHVec2d PHVec2d::operator / (PHScalar div)
{
    return PHVec2d(x / div, y / div);
}

PHVec3d PHVec3d::operator / (PHScalar div)
{
    return PHVec3d(x / div, y / div, z / div);
}

PHVec2d PHVec2d::operator *= (PHScalar mul)
{
    x *= mul;
    y *= mul;
    
    return  *this;
}

PHVec3d PHVec3d::operator *= (PHScalar mul)
{
    x *= mul;
    y *= mul;
    z *= mul;
    
    return  *this;
}

PHVec2d PHVec2d::operator /= (PHScalar div)
{
    x /= div;
    y /= div;
    
    return *this;
}

PHVec3d PHVec3d::operator /= (PHScalar div)
{
    x /= div;
    y /= div;
    z /= div;
    
    return *this;
}
