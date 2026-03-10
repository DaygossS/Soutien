#pragma once
#include <SFML/Graphics.hpp>
#include "Collider.h"

class Wall
{
private:
	sf::RectangleShape rectangle;

public:
	Wall(sf::Vector2f position, sf::Vector2f size);

	Collider GetCollider();
	sf::Vector2f GetPosition();

	void Draw(sf::RenderWindow& window);
};

