#include <SFML/Graphics.hpp>
#include "Wall.h"

int main()
{
    Wall wall;
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "SFML works!");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        wall.Draw(window);
        window.display();
    }
}