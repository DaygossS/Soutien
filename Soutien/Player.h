#pragma once
#include "Entity.h"
#include <SFML/Graphics.hpp>
class Player : protected Entity
{
public:
	Player();
	float health = 20;
	std::string name = "Player";
	int damage = 10;
	void draw(sf::RenderWindow& window);
	
private: 
	sf::RectangleShape rectangle;
};

