#include "Sphere.h"
#include <iostream>

Sphere::Sphere(Vec3 _origin, double _radius, Vec3 _colour) : origin(_origin), radius(_radius), colour(_colour) {
	radius2 = _radius * _radius;
}

Vec3 Sphere::getColour(){
	return colour;
}

bool Sphere::hit(Ray &ray){
	Vec3 oc = ray.origin - origin;
	double a = ray.dir.dot(ray.dir);
	double b = 2 * oc.dot(ray.dir);
	double c = oc.dot(oc) - radius2;
	double disc = b*b - 4 * a * c;
	return disc > 0;
}

