//
// Created by wilhelm on 07.03.22.
//

#ifndef XD_RENDERER_ENTITY2D_H
#define XD_RENDERER_ENTITY2D_H

#include <SFML/Graphics.hpp>

class Entity2D {
protected:
    sf::Shape* shape{};
public:
    ~Entity2D();
    sf::Shape* getShape() const;
};

#endif //XD_RENDERER_ENTITY2D_H
