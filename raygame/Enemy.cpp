#pragma once
#include <cmath>;

#include "Actor.h"
#include "Enemy.h";


	float Enemy::speed{ };
	Actor Enemy::target{ };

	//Add points

	//remove points

	/// <param name="x">Position on the x axis</param>
	/// <param name="y">Position on the y axis</param>
	/// <param name="icon">The symbol that will appear when drawn</param>
	Enemy::Enemy(float x, float y, MathLibrary::Vector2 newPoint, char icon = ' ')
	{
		m_newPoint = newPoint;
		m_currentPoint = newPoint;
	}
	Enemy::Enemy(float x, float y, Color rayColor, MathLibrary::Vector2 newPoint, char icon = ' ')
	{
		m_alertColor = CLITERAL(RED);
		m_newPoint = newPoint;
		m_currentPoint = newPoint;

		/*m_sprite = new Sprite("Images/enemy.png");*/
	}

	bool Enemy::checkTargetInSight(float maxAngle, float maxDistance)
	{
		//Checks if the target has a value before continuing
		/*if (m_target)
		return false;*/

		//Find the vector representing the distance between the actor and its target
		Vector2 direction = target.getLocalPosition - getLocalPosition;
		//Get the magnitude of the distance vector
		float distance = direction.(float)getMagnitude;
		//Use the inverse cosine to find the angle of the dot product in radians
		float angle = _NODISCARD::math.acos(Vector2::(getForward, Vector2::(direction).getNormalized).dotProduct);

		//Return true if the angle and distance are in range
		if (angle <= maxAngle && distance <= maxDistance)
			return true;

		return false;
	}


	void Enemy::updatePatrolLocation() 
	{
	
	}


	void Enemy::draw()
	{

	}
	 
	void Enemy::update(float deltaTime)
	{

	}


