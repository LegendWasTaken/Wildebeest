#pragma once

class Vec3 {
    public:
        double x, y, z;

        Vec3 normalize();
        Vec3 operator + (Vec3 &a);
        Vec3 operator - (Vec3 &a);
        Vec3 operator * (Vec3 &a);
        Vec3 operator * (double a);
        Vec3 cross(Vec3 &a);

        double dot(Vec3 &a);
        double dist(Vec3 &a);
        double distSq(Vec3 &a);

        Vec3();
        Vec3(double a);
        Vec3(double _x, double _y, double _z);
        ~Vec3();
};