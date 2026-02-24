#include "Player.h"

Player::Player() : Entity() {
	rectangle.setSize({ 50.f, 50.f });
	rectangle.setFillColor(sf::Color::Red);
	rectangle.setPosition({ 75.f, 75.f });
	
}

void Player::draw(sf::RenderWindow& window) {
	window.draw(rectangle);
}