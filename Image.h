#pragma once

#include <fstream>
#include <vector>
#include "Vec3.h"

class Image {
    public:
        void setData(int x, int y, Vec3 colour);
        void printToFile(std::string path);
        Vec3 getData(int x, int y);
        Image(int _width, int _height);
    private:
        int width, height;
        std::vector<Vec3> pixels;
};
