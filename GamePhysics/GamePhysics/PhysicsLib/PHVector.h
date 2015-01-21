//
//  PHVector.h
//  GamePhysics
//
//  Created by Sergey on 1/21/15.
//  Copyright (c) 2015 Sergey. All rights reserved.
//

#ifndef __PHVector__
#define __PHVector__

#include <stdio.h>

/*
    PH predicate - abbreviation of the word "Physics"
*/

//scalar type
typedef float PHScalar;

//2D vector
struct PHVec2d
{
    PHScalar x;
    PHScalar y;
};
typedef struct PHVec2d PHVec2d;

//3D vector
struct PHVec3d
{
    PHScalar x;
    PHScalar y;
    PHScalar z;
};
typedef struct PHVec3d PHVec3d;

//make 2d vector
inline PHVec2d
PHVec2dMake(PHScalar x, PHScalar y)
{
    PHVec2d v; v.x = x; v.y = y; return v;
}

//make 3d vector
inline PHVec3d
PHVec3dMake(PHScalar x, PHScalar y, PHScalar z)
{
    PHVec3d v; v.x = x; v.y = y; v.z = z; return v;
}

//Scale 2d vector
PHVec2d PHScale2d(PHVec2d v, PHScalar f);

//Scale incoming 2d vector
void PHScale2dDirect(PHVec2d *v, PHScalar f);

//Scale incoming 3d vector
void PHScale3dDirect(PHVec3d *v, PHScalar f);

//Scale 3d vector
PHVec3d PHScale3d(PHVec3d v, PHScalar f);

//Norm of 2D vector
PHScalar PHNorm2d(PHVec2d v);

//Norm of 2D vector direct from source vector
PHScalar PHNorm2dDirect(PHVec2d *v);

//Norm of 3D vector
PHScalar PHNorm3d(PHVec3d v);

//Norm of 3D vector direct from source vector
PHScalar PHNorm3dDirect(PHVec3d *v);

//Quad Norm of 2d vector
PHScalar PHQuadNorm2d(PHVec2d v);

//Quad Norm of 2d vector direct from source vector
PHScalar PHQuadNorm2dDirect(PHVec2d *v);

//Quad Norm of 3d vector
PHScalar PHQuadNorm3d(PHVec3d v);

//Quad Norm of 3d vector direct from source vector
PHScalar PHQuadNorm3dDirect(PHVec3d *v);

//Normalization of 2D vector
PHVec2d PHNormalize2d(PHVec2d v);

//Normalization of 2D vector with modifying source vector
void PHNormalize2dDirect(PHVec2d *v);

//Normalization of 3D vector
PHVec3d PHNormalize3d(PHVec3d v);

//Normalization of 3D vector with modifying source vector
void PHNormalize3dDirect(PHVec3d *v);

//Scalar multiplication of 2D vectors
PHScalar PHScalarMul2d(PHVec2d v1, PHVec2d v2);

//Scalar multiplication of 2D vectors direct from source vectors
PHScalar PHScalarMul2dDirect(PHVec2d *v1, PHVec2d *v2);

//Scalar multiplication of 3D vectors
PHScalar PHScalarMul3d(PHVec3d v1, PHVec3d v2);

//Scalar multiplication of 3D vectors direct from source vectors
PHScalar PHScalarMul3dDirect(PHVec3d *v1, PHVec3d *v2);

//Vector(cross) multiplication of 3D vectors
PHVec3d PHCrossMul3d(PHVec3d v1, PHVec3d v2);

//Vector(cross) multiplication of 3D vectors direct from source vectors
//with modifying incoming result vector
void PHCrossMul3dDirect(PHVec3d *v1, PHVec3d *v2, PHVec3d *result);

#endif /* defined(__PHVector__) */
