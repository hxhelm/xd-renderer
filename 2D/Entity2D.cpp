//
// Created by wilhelm on 07.03.22.
//

#include "Entity2D.h"

Entity2D::~Entity2D() {
    delete shape;
}

sf::Shape* Entity2D::getShape() const {
    return shape;
}
