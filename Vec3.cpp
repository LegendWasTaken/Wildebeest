#include "Vec3.h"
#include <tgmath.h>

Vec3 Vec3::normalize(){
    double t = sqrt(x * x + y * y + z * z);
    return Vec3(x / t, y / t, z / t);
}

Vec3 Vec3::operator+(Vec3 &a){
    return Vec3(x + a.x, y + a.y, z + a.z);
}

Vec3 Vec3::operator-(Vec3 &a){
    return Vec3(x - a.x, y - a.y, z - a.z);
}

Vec3 Vec3::cross(Vec3 &a){
    return Vec3(
        y * a.z - z * a.y,
        z * a.x - x * a.z,
        x * a.y - y * a.x
    );
}

Vec3 Vec3::operator*(double a){
    return Vec3(x * a, y * a, z * a);
}

Vec3 Vec3::operator*(Vec3 &a){
    return Vec3(x * a.x, y * a.y, z * a.z);
}

double Vec3::dot(Vec3 &a){
    return x * a.x + y * a.y + z * a.z;
}

double Vec3::dist(Vec3 &a){
    return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y) + (z - a.z) * (z - a.z));
}

double Vec3::distSq(Vec3 &a){
return (x - a.x) * (x - a.x) + (y - a.y) * (y - a.y) + (z - a.z) * (z - a.z);
}

Vec3::Vec3() : x(0), y(0), z(0) {}

Vec3::Vec3(double a) : x(a), y(a), z(a){}

Vec3::Vec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z){}

Vec3::~Vec3(){}