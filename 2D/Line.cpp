//
// Created by wilhelm on 13.03.22.
//

#include "Line.h"
using std::pow, std::sqrt, std::atan2;

Line::Line(float from_x, float from_y, float to_x, float to_y, float thickness) {
    auto* rectangle = new sf::RectangleShape;
    // calculate distance between the two points
    float length = std::sqrt(std::pow(to_x - from_x, 2.0f) + std::pow(to_y - from_y, 2.0f));
    rectangle->setPosition(from_x, from_y);
    rectangle->setSize(sf::Vector2f(length, thickness));

    // calculate the angle between the two points in order to set the right rotation
    double angle = atan2(
        to_y - from_y,
        to_x - from_x
    ) * (180 / M_PI);
    rectangle->rotate(static_cast<float>(angle));
    shape = rectangle;
}
