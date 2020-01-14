#include "Engine.h"
Engine::Engine(int _x, int _y) : x(_x), y(_y) {
    xfix = (double) _x / (double) y;
    camera_position = Vec3(0, 0, -10);
	objects.resize(0);
}

void Engine::addObject(Object &obj){
    objects.push_back(obj);
}

Image Engine::render(){
    Image image = Image(x, y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            Ray ray = Ray(camera_position, 
            Vec3(
                (((double) j / y) * 2) - xfix, 
                (((double) i / y) * 2) - 1, 1));

            double bestDistance = 0;
            Object bestObject;
			for(auto e: objects){
                if(e.hit(ray)) image.setData(j, i, Vec3(255, 0, 0));
			}
        }
    }
    return image;
}