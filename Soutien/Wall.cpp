#include "Wall.h"

Wall::Wall()
{
	rectangle.setFillColor({sf::Color::Blue});
	rectangle.setSize({ 50.f, 100.f });
	rectangle.setPosition({100.f, 100.f});
}

void Wall::Draw(sf::RenderWindow& window)
{
	window.draw(rectangle);
}
