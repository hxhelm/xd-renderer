//
// Created by wilhelm on 28.02.22.
//

#include "Space2D.h"

Space2D::~Space2D() {
    for (auto* entity : entities) {
        delete entity;
    }
}

void Space2D::addEntity(Entity2D* entity) {
    entities.push_back(entity);
}

const std::vector<Entity2D*> &Space2D::getEntities() const {
    return entities;
}
