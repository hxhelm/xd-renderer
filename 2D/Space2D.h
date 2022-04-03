//
// Created by wilhelm on 28.02.22.
//

#ifndef XD_RENDERER_SPACE2D_H
#define XD_RENDERER_SPACE2D_H

#include "Vector2D.h"
#include "Entity2D.h"

#include "vector"
#include "cassert"
#include "cmath"


class Space2D {
public:
    Space2D() = default;
    ~Space2D();
    void addEntity(Entity2D* entity);
    const std::vector<Entity2D*> &getEntities() const;
private:
    std::vector<Entity2D*> entities;
};


#endif //XD_RENDERER_SPACE2D_H
