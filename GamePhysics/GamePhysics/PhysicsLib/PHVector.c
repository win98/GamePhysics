//
//  PHVector.c
//  GamePhysics
//
//  Created by Sergey on 1/21/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#include "PHVector.h"
#include <math.h>

//Scale 2d vector
PHVec2d PHScale2d(PHVec2d v, PHScalar f)
{
    PHVec2d res;
    
    res.x = v.x * f;
    res.y = v.y * f;
    
    return res;
}

//Scale incoming 2d vector
void PHScale2dDirect(PHVec2d *v, PHScalar f)
{
    v->x = v->x * f;
    v->y = v->y * f;
}

//Scale 3d vector
PHVec3d PHScale3d(PHVec3d v, PHScalar f)
{
    PHVec3d res;
    
    res.x = v.x * f;
    res.y = v.y * f;
    res.z = v.z * f;
    
    return res;
}

//Scale incoming 3d vector
void PHScale3dDirect(PHVec3d *v, PHScalar f)
{
    v->x = v->x * f;
    v->y = v->y * f;
    v->z = v->z * f;
}

//Norm of 2D vector
PHScalar PHNorm2d(PHVec2d v)
{
    PHScalar res = sqrtf(v.x * v.x + v.y * v.y);
    
    return res;
}

//Norm of 2D vector direct from source vector
PHScalar PHNorm2dDirect(PHVec2d *v)
{
    PHScalar res = sqrtf(v->x * v->x + v->y * v->y);
    
    return res;
}

//Norm of 3D vector
PHScalar PHNorm3d(PHVec3d v)
{
    PHScalar res = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    
    return res;
}

//Norm of 3D vector direct from source vector
PHScalar PHNorm3dDirect(PHVec3d *v)
{
    PHScalar res = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    
    return res;
}

//Quad Norm of 2d vector
PHScalar PHQuadNorm2d(PHVec2d v)
{
    PHScalar res = v.x * v.x + v.y * v.y;
    
    return res;
}

//Quad Norm of 2d vector direct from source vector
PHScalar PHQuadNorm2dDirect(PHVec2d *v)
{
    PHScalar res = v->x * v->x + v->y * v->y;
    
    return res;
}

//Quad Norm of 3d vector
PHScalar PHQuadNorm3d(PHVec3d v)
{
    PHScalar res = v.x * v.x + v.y * v.y + v.z * v.z;
    
    return res;
}

//Quad Norm of 3d vector direct from source vector
PHScalar PHQuadNorm3dDirect(PHVec3d *v)
{
    PHScalar res = v->x * v->x + v->y * v->y + v->z * v->z;
    
    return res;
}

//Normalization of 2D vector
PHVec2d PHNormalize2d(PHVec2d v)
{
    PHVec2d res;
    
    PHScalar vNorm = PHNorm2d(v);
    
    res.x = v.x / vNorm;
    res.y = v.y / vNorm;
    
    return res;
}

//Normalization of 2D vector with modifying source vector
void PHNormalize2dDirect(PHVec2d *v)
{
    PHScalar vNorm = PHNorm2dDirect(v);
    
    v->x = v->x / vNorm;
    v->y = v->y / vNorm;
}

//Normalization of 3D vector
PHVec3d PHNormalize3d(PHVec3d v)
{
    PHVec3d res;
    
    PHScalar vNorm = PHNorm3d(v);
    
    res.x = v.x / vNorm;
    res.y = v.y / vNorm;
    res.z = v.z / vNorm;
    
    return res;
}

//Normalization of 3D vector with modifying source vector
void PHNormalize3dDirect(PHVec3d *v)
{
    PHScalar vNorm = PHNorm3dDirect(v);
    
    v->x = v->x / vNorm;
    v->y = v->y / vNorm;
    v->z = v->z / vNorm;
}

//Scalar multiplication of 2D vectors
PHScalar PHScalarMul2d(PHVec2d v1, PHVec2d v2)
{
    PHScalar res = sqrtf(v1.x * v2.x + v1.y * v2.y);
    
    return res;
}

//Scalar multiplication of 2D vectors direct from source vectors
PHScalar PHScalarMul2dDirect(PHVec2d *v1, PHVec2d *v2)
{
    PHScalar res = sqrtf(v1->x * v2->x + v1->y * v2->y);
    
    return res;
}

//Scalar multiplication of 3D vectors
PHScalar PHScalarMul3d(PHVec3d v1, PHVec3d v2)
{
    PHScalar res = sqrtf(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
    
    return res;
}

//Scalar multiplication of 3D vectors direct from source vectors
PHScalar PHScalarMul3dDirect(PHVec3d *v1, PHVec3d *v2)
{
    PHScalar res = sqrtf(v1->x * v2->x + v1->y * v2->y + v1->z * v2->z);
    
    return res;
}

//Vector(cross) multiplication of 3D vectors
PHVec3d PHCrossMul3d(PHVec3d v1, PHVec3d v2)
{
    PHVec3d res;
    
    res.x = v1.y * v2.z - v1.z * v2.y;
    res.y = v1.z * v2.x - v1.x * v2.z;
    res.z = v1.x * v2.y - v1.y * v2.x;
    
    return res;
}

//Vector(cross) multiplication of 3D vectors direct from source vectors
//with modifying incoming result vector
void PHCrossMul3dDirect(PHVec3d *v1, PHVec3d *v2, PHVec3d *result)
{
    result->x = v1->y * v2->z - v1->z * v2->y;
    result->y = v1->z * v2->x - v1->x * v2->z;
    result->z = v1->x * v2->y - v1->y * v2->x;
}



