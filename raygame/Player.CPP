#include "Player.h"
#include "Sprite.h"


Player::Player(float x, float y, float collisionradius, float speed, float maxspeed) 
{
	speed = m_soeed;
	collisionradius = m_collisionradius;
	maxspeed = m_maxspeed;
	setLocalPosition(MathLibrary::Vector2(x, y));
}

void Player::GetPlayerInput()
{
	
}

MathLibrary::Vector2 Player::getWorldPosition()
{
	return MathLibrary::Vector2(m_globalTransform->m13, m_globalTransform->m23);
	
}

bool Player::checkCollision(Actor* other)
{
	float distance = (other->getWorldPosition() - getWorldPosition()).getMagnitude();
	/*return distance <= m_collisionradius + other->m_collisionRadius*/
}