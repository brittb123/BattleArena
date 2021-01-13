#pragma once
#include "Enemy.h";
#include "raylib.h"

#include <Vector2.h>
#include <Matrix3.h>




class Enemy : Actor
{
private:
	Actor m_target;
	Color m_alertColor;
	//points 
	MathLibrary::Vector2 m_currentPoint;
	MathLibrary::Vector2 m_newPoint;

	float m_speed = 1;
	Sprite m_sprite;

public:
	float speed{ };
	Actor target{ };

	//Add points

	//remove points

	/// <param name="x">Position on the x axis</param>
	/// <param name="y">Position on the y axis</param>
	/// <param name="icon">The symbol that will appear when drawn</param>
	Enemy(float x, float y, MathLibrary::Vector2 newPoint, char icon = ' ') 
	{
		m_newPoint = newPoint;
		m_currentPoint = newPoint;
	};
	Enemy(float x, float y, Color rayColor, MathLibrary::Vector2 newPoint, char icon = ' ') 
	{
		m_alertColor = CLITERAL(RED);
		m_newPoint = newPoint;
		m_currentPoint = newPoint;

		/*m_sprite = new Sprite("Images/enemy.png");*/
	};

	bool checkTargetInSight(float maxAngle, float maxDistance) 
	{
		//Checks if the target has a value before continuing
		/*if (m_target)
			return false;*/

		//Find the vector representing the distance between the actor and its target
		Vector2 direction = target.getLocalPosition - getLocalPosition;
		//Get the magnitude of the distance vector
		float distance = direction.getMagnitude();
		//Use the inverse cosine to find the angle of the dot product in radians
		float angle = (float)Math.Acos(MathLibrary::Vector2.DotProduct(getForward, direction.normalized));

		//Return true if the angle and distance are in range
		if (angle <= maxAngle && distance <= maxDistance)
			return true;

		return false;
	};

private:
	void updatePatrolLocation() 
	{
	
	};

public:
	
	void draw() override
	{

	};
	 
	void update(float deltaTime)
	{

	};
};