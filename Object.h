#pragma once

#include "Vec3.h"
#include "Ray.h"

class Object {
    public:
        virtual bool hit(Ray &ray);
        virtual Vec3 getColour();
};