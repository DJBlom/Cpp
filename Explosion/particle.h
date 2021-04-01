/* Contents: The Particle class
 *
 * Author: Dawid Blom	
 *
 * Date: 30/03/2021
 */

// Start of header file.
#ifndef _PARTICLE_H_
#define _PARTICLE_H_

// All libraries used in this file.
#include <iostream>



// Defining the class Particle
class Particle
{
	
	public: // All the methods declared in this class.
		// Construcotr.
		Particle();

		// Destructor.
		virtual ~Particle();

		// A method used to update the particles.
		void update(int interval);

	private:
		// A method used to initialize the particles.
		void init();


	public: // All the data members used in this class.

		// X and Y coordinates.
		double m_x; 
		double m_y;

		// Speed of the X and Y coordinate.
		double m_speed;

		// Angle at which they will move.
		double m_direction;
};



// End of header file.
#endif
