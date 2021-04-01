/* Contents: Main program
 *
 * Author: Dawid Blom
 *
 * Date: 29/03/2021
 */

// All libraries used in this file.
#include <iostream>
#include <math.h>
#include <SDL2/SDL.h>
#include "screen.h"
#include <stdlib.h>
#include <time.h>
#include "swarm.h"



// Declaring the explosion() function.
void explosion();

// Main function.
int main()
{
	// Calling the explosion function.
	explosion();

	// Return 0 if all is good.
	return 0;
}






// Game loop that will continue to run until the user exits the screen.
bool loop(Screen &screen)
{
	// Swarm object.
	Swarm swarm;


	// Varaible to hold the devision by two.
	const int devide = Screen::SCREEN_WIDTH / 2;

	// Running the main loop.
	while (true)
	{
		// Varibles to hold clors.
		int elapsed = SDL_GetTicks();
	

		// Updating the positions of the particles.
		swarm.update(elapsed);
		
		// Getting the colors
		unsigned char green = (1 + std::sin(elapsed * 0.0003)) * 128;
		unsigned char red = (1 + std::sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + std::cos(elapsed * 0.0004)) * 128;


		// Creating a swarm of particles.
		const Particle *const pParticles = swarm.getParticles();

		// Iterating through each pixel and assigning them with a coordinate and a color.
		for (int i = 0; i < Swarm::nParticles; i++)
		{
			// Selecting the particle
			Particle particle = pParticles[i];

			// Assinging the coordinates
			int x = (particle.m_x + 1) * devide;
			int y = particle.m_y * devide + Screen::SCREEN_HEIGHT / 2;

			// Assinging the color.
			screen.setPixel(x, y, red, green, blue);
		}


		// Blurring the particles instead of letting it drag over the screen.
		screen.boxBlur();


		// Draw the screen.
		screen.update();

		// Check for messages or events.
		if (screen.processEvents() == false)
			return false;
	}
}



// A function execute the program from within the main function.
void explosion()
{
	// Getting a random number to start with.
	srand(time(nullptr));
	

	// Creating a Screen object.
	Screen screen;

	// Initializing the screen object.
	// If it fails then we exit the program with a error message.
	if (screen.init() == false)
	{
		std::cout << "Could not create the screen.\n";
		SDL_Quit();
	}



	// Calling the loop function.
	bool quit = loop(screen);
	

	// Closing the screen and freeing all memory that was allocated.
	if (quit == false)
	{
		screen.close();
	}
}
