#include "Wall.h"

Wall::Wall(sf::Vector2f position, sf::Vector2f size)
{
	rectangle.setFillColor({sf::Color::Blue});
	rectangle.setSize(size);
	rectangle.setPosition(position);
}

Collider Wall::GetCollider()
{
	return Collider(rectangle);
}

sf::Vector2f Wall::GetPosition()
{
	return rectangle.getPosition();
}

void Wall::Draw(sf::RenderWindow& window)
{
	window.draw(rectangle);
}
