#pragma once

#include "Vec3.h"
#include "Ray.h"

class Object {
    public:
        virtual bool hit(Ray &ray) = 0;
        virtual Vec3 getColour() = 0;
};