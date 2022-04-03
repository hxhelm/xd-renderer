//
// Created by wilhelm on 11.03.22.
//

#include "Circle.h"

Circle::Circle(float x, float y, float radius) {
    auto* circle = new sf::CircleShape(radius);
    circle->setPosition(x, y);
    circle->setOrigin(circle->getRadius(), circle->getRadius());
    shape = circle;
}
