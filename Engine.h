#pragma once

#include "Object.h"
#include "Image.h"
#include "Vec3.h"
#include "Sphere.h"
#include <vector>

class Engine {
    public:
        void addObject(std::unique_ptr<Object> obj);
        Image render();
        Engine(int _x, int _y);
    private:
        int x, y;
        float xfix;
		std::vector<std::unique_ptr<Object>> objects;
        Vec3 camera_position;
};

