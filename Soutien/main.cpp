#include <SFML/Graphics.hpp>
#include "Player.h"
#include <iostream>
int main()
{
    Player player;
    std::cout << player.health << std::endl;
    std::cout << player.name << std::endl;
    std::cout << player.damage << std::endl;
    sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML works!");


    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        player.draw(window);

        window.display();
    }
}