#include <SFML/Graphics.hpp>
#include "2D/Space2D.h"
#include "2D/Circle.h"
#include "iostream"
#include "2D/Line.h"

using std::cout;

// TODO
// 1. Create Window
// 2. Create Space
// 3. Create Points
// 4. Draw Points
// 5. Create Lines
// 6. Draw Lines

int main() {
    const int windowWidth = 800;
    const int windowHeight = 800;
    const float circleRadius = .05f;
    const float viewScale = 2;
    const float vw = viewScale * 2, vh = viewScale * 2;

    sf::RenderWindow window(
            sf::VideoMode(int(windowWidth), int(windowHeight)),
            "xd-renderer", sf::Style::Titlebar | sf::Style::Close
    );

    // use negative vh for the view-size, since the default y-axis is scaling top-to-bottom
    sf::View view(sf::Vector2f(0, 0), sf::Vector2f(vw, vh));
    window.setView(view);

    // Coordinate System
    // give window dimensions and interval to 2DSpace
    Space2D space;

    //create points and map them to the window dimensions
    space.addEntity(new Circle(-1, 1, circleRadius)); // top-left
    space.addEntity(new Circle(1,1, circleRadius)); // top-right
    space.addEntity(new Circle(-1,-1, circleRadius)); // bottom-left
    space.addEntity(new Circle(1,-1, circleRadius)); // bottom-right
//    space.addEntity(new Circle(0,0, circleRadius));

    // connect dots
    space.addEntity(new Line(-1, 1, 1, 1));
    space.addEntity(new Line(1, 1, 1,-1));
    space.addEntity(new Line(1, -1, -1,-1));
    space.addEntity(new Line(-1, -1, -1, 1));

    // create x- and y-axis
    sf::RectangleShape xAxis(sf::Vector2(viewScale, .01f));
    xAxis.setFillColor(sf::Color::Red);
    sf::RectangleShape yAxis(sf::Vector2(viewScale, .01f));
    yAxis.setFillColor(sf::Color::Red);
    yAxis.rotate(-90);

    // run the program as long as the window is open
    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event{};
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        for (auto entity : space.getEntities()) {
            window.draw(*entity->getShape());
        }

        window.draw(xAxis);
        window.draw(yAxis);

        window.display();
    }

    return 0;
}