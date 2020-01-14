#include "Engine.h"
#include "Image.h"
#include "Sphere.h"
#include <iostream>

#define whilst while

int main() {
    // Main Engine
	Engine engine = Engine(1280, 720);

	engine.addObject(std::make_unique<Sphere>(Vec3(0, 0, 50), 30, Vec3(255, 0, 0)));

	engine.render().printToFile("image.ppm");
    return 0;
}