#include "Ray.h"

Vec3 Ray::getPoint(double t){ 
	Vec3 d = dir * t;
    return origin + d;
}

Ray::Ray(Vec3 _origin, Vec3 _dir) : origin(_origin), dir(_dir){}