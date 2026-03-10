#include "Collider.h"

Collider::Collider(sf::RectangleShape& Rect)
	:ColliderRect(Rect)
{
}

sf::FloatRect Collider::getBounds() const
{
	return ColliderRect.getGlobalBounds();
}

bool Collider::checkCollision(const Collider& entite) const
{
	
	return getBounds().findIntersection(entite.getBounds()).has_value();
}


