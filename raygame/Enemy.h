#pragma once

#include <Vector2.h>
#include <Matrix3.h>

#include "Actor.h"


class Enemy
{
private:
	Actor m_target;
	MathLibrary::Vector2 m_patrolPointA;

	MathLibrary::Vector2 m_currentPoint;
	float m_speed;
	/*MathLibrary::Sprite m_sprite;*/

public:
	float Speed{ get {return m_speed; } set {m_speed = value; } }
};