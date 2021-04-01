/* Contents: Implementations of all methods declared in the header file swarm.h
 *
 * Author: Dawid Blom
 *
 * Date: 30/03/2021 
 */

// All libraries used in this file.
#include "swarm.h"



// Constructor
Swarm::Swarm() :lastTime(0)
{
	// Creating a new Particle object.
	m_pParticles = new Particle[nParticles];
}



// Destructor
Swarm::~Swarm()
{
	// Freeing up the memory allocated.
	delete [] m_pParticles;
}



// Implementation of the update method.
void Swarm::update(int elapsed)
{
	// Each individual interval.
	int interval = elapsed - this -> lastTime;

	
	// Updating each particle individually.
	for (int i = 0; i < Swarm::nParticles; i++)
	{
		m_pParticles[i].update(interval);
	}


	// Updating the last time of the particle.
	lastTime = elapsed;
}
