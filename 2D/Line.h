//
// Created by wilhelm on 13.03.22.
//

#ifndef XD_RENDERER_LINE_H
#define XD_RENDERER_LINE_H

#include "Entity2D.h"
#include "Vector2D.h"
#include <cmath>
#include "iostream"


class Line  : public Entity2D {
public:
    Line(float from_x, float from_y, float to_x, float to_y, float thickness = .01f);
};

#endif //XD_RENDERER_LINE_H
