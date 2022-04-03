//
// Created by wilhelm on 28.02.22.
//

#ifndef XD_RENDERER_VECTOR2D_H
#define XD_RENDERER_VECTOR2D_H


class Vector2D {
public:
    Vector2D(float x, float y);
    float getX() const;
    float getY() const;
private:
    float x;
    float y;
};


#endif //XD_RENDERER_VECTOR2D_H
