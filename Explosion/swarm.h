/* Contents: Declaration of the Swarm class
 *
 * Author: Dawid Blom
 *
 * Date: 30/03/2021 
 */

// Start of header file
#ifndef _SWARM_H_
#define _SWARM_H_

// Libraries used in this file.
#include "particle.h"



// Declaring the class Swarm
class Swarm
{
	public: // All methods declared in this class.

		// Constructor.
		Swarm();

		// Destructor.
		virtual ~Swarm();

		// A method used to update the swarm.
		void update(int elapsed);

		// A getter method.
		const Particle *const getParticles() { return m_pParticles; }

	private: // All private data members declared in this class.

		// Indevidual particles
		Particle *m_pParticles;

		// To keep track of where the particle was last time. 
		int lastTime;


	public: // All public data members.

		// The number particles on ths screen.
		const static int nParticles = 5000;
};





// End of header file
#endif
