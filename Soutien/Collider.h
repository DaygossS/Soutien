#pragma once
#include <SFML/Graphics.hpp>


class Collider
{
public:
	Collider(sf::RectangleShape& Rect);
	
	sf::FloatRect getBounds() const;
	bool checkCollision(const Collider& entite) const;

private:
	sf::RectangleShape& ColliderRect;
};

