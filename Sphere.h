#pragma once

#include "Object.h"

class Sphere : public Object {
	public:
		Vec3 origin, colour;
		double radius, radius2;
		Vec3 getColour() override;
		bool hit(Ray &ray) override;
		Sphere();
		Sphere(Vec3 origin, double radius, Vec3 colour);
};

