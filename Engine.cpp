#include <iostream>
#include "Engine.h"


Engine::Engine(int _x, int _y) : x(_x), y(_y) {
    xfix = (double) _x / (double) y;
    camera_position = Vec3(0, 0, -10);
	objects.resize(0);
}

void Engine::addObject(std::unique_ptr<Object> obj){
    objects.push_back(std::move(obj));
}

Image Engine::render(){
    Image image = Image(x, y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            Ray ray = Ray(camera_position, 
            Vec3(
                (((double) j / y) * 2) - xfix, 
                (((double) i / y) * 2) - 1, 1));
			for(int a=0; a<objects.size(); a++){
                if(objects[a]->hit(ray)) image.setData(j, i, Vec3(255, 0, 0));
			}
        }
    }
    return image;
}