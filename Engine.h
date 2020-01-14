#pragma once

#include "Object.h"
#include "Image.h"
#include "Vec3.h"
#include <vector>

class Engine {
    public:
        void addObject(Object &obj);
        Image render();
        Engine(int _x, int _y);
    private:
        int x, y;
        float xfix;
        std::vector<Object> objects;
        Vec3 camera_position;
};

