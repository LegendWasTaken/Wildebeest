#include <iostream>

#include "Image.h"

Image::Image(int _width, int _height) : width(_width), height(_height){
    int size = _width * _height;
    pixels.resize(size);
    for(int i=0; i<size; i++){
        // Setting the default colour to black
        pixels[i] = Vec3(0, 0, 0);
    }
}

void Image::printToFile(std::string path){
    std::ofstream img(path);
    img << "P3" << std::endl;
    img << width << " " << height << std::endl;
    img << "255" << std::endl;

    Vec3 cur;
    for(int y=0; y<height; y++){
        for(int x=0; x<width; x++){
            cur = pixels[y * width + x];
            img << cur.x << " " << cur.y << " " << cur.z << std::endl;
        }
    }
}

void Image::setData(int x, int y, Vec3 colour){
    if(x > width || x < 0 || y > height || y < 0){
        std::cout << "[Warn] Invalid images coordinates." << std::endl;
        x = abs(x % width);
        y = abs(y % height);
    }
    pixels[y * width + x] = colour;
}

Vec3 Image::getData(int x, int y){
    if(x > width || x < 0 || y > height || y < 0){
        std::cout << "[Warn] Invalid images coordinates." << std::endl;
        x = abs(x % width);
        y = abs(y % height);
    }
    return pixels[y * width + x];
}