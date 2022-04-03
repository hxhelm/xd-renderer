//
// Created by wilhelm on 03.04.22.
//

#ifndef XD_RENDERER_VECTOR3D_H
#define XD_RENDERER_VECTOR3D_H


class Vector3D {
public:
    Vector3D(float x, float y, float z);
    float getX() const;
    float getY() const;
    float getZ() const;
private:
    float x;
    float y;
    float z;
};


#endif //XD_RENDERER_VECTOR3D_H
