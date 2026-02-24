#pragma once
#include <SFML/Graphics.hpp>

class Wall
{
private:
	sf::RectangleShape rectangle;
public:
	Wall();
	void Draw(sf::RenderWindow& window);
};

