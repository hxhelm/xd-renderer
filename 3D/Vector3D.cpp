//
// Created by wilhelm on 03.04.22.
//

#include "Vector3D.h"

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

float Vector3D::getX() const {
    return x;
}

float Vector3D::getY() const {
    return y;
}

float Vector3D::getZ() const {
    return z;
}
