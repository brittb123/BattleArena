#include "Player.h"
#include "Sprite.h"


Player::Player(float x, float y, float collisionradius, float speed, float maxspeed) 
{
	speed = m_soeed;
	collisionradius = m_collisionradius;
	maxspeed = m_maxspeed;
	setLocalPosition(MathLibrary::Vector2(x, y));
}

