#pragma once

#include "Vec3.h"

class Ray {
    public:
        Vec3 origin, dir;

        Vec3 getPoint(double t);
        Ray(Vec3 _origin, Vec3 _dir);
};

