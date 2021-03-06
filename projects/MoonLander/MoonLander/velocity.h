/***********************************************************************
* Header File:
*    Velocity : The representation of the lander's velocity
* Author:
*    Br. Helfrich
* Summary:
*    Everything we need to know about lander's velocity.
************************************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H


class Velocity
{
private:

	float dx;
	float dy;

public:

	//CONSTRUCTORS
	Velocity() {}
	Velocity(float dx, float dy) {};

	//SETTERS
	void setDx(float dx) { this->dx = dx; }
	void setDy(float dy) { this->dy = dy; }
	void setV(float newDx, float newDy);

	//GETTERS
	float getDx() const { return dx; }
	float getDy() const { return dy; }

};

#endif