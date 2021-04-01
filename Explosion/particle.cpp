/* Contents: Implementations of the Particle class.
 *
 * Author: Dawid Blom
 *
 * Date: 30/03/2021 
 */

// All libraries used in this file.
#include "particle.h"
#include <math.h>
#include <stdlib.h>


// Implementation of the constructor.
Particle::Particle(): m_x(0), m_y(0) 
{
	init();
}



// Implementation of the destructor.
Particle::~Particle()
{
	// Todo.
}




// A method used to initialize the particles.
void Particle::init()
{
	// Re-initializing the x and y coordinate.
	this -> m_x = 0;
	this -> m_y = 0;

	// Direction it will go in.
	this -> m_direction = (2 * M_PI * rand()) / RAND_MAX;

	// Speed it will move at.
	this -> m_speed = (0.04 * rand()) / RAND_MAX;

	// Changing the appearance of the particles.
	this -> m_speed *= this -> m_speed;
}



// Implementation of the update() method.
void Particle::update(int interval)
{
	// Creating a circular direction the particles will move into.
	this -> m_direction += interval *  0.0003;

	// Updating the speed and direction.
	double xspeed = this -> m_speed * std::cos(this -> m_direction);
	double yspeed = this -> m_speed * std::sin(this -> m_direction);


	// Updating the X and Y coordinates, or moving them.
	this -> m_x += xspeed * interval;	
	this -> m_y += yspeed * interval;


	// Checking if the particles goes off the screen.
	if (this -> m_x < -1 || this -> m_x > 1 || this -> m_y < -1 || this -> m_y > 1)
	{
		init();
	}


	if (rand() < RAND_MAX / 100)
	{
		init();
	}
}
