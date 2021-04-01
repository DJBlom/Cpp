/* Contents: Screen class
 *
 * Author: Dawid Blom
 *
 * Date: 29/03/2021
 */

// Start of header file
#ifndef _SCREEN_H_
#define _SCREEN_H_

// All the libraries used in this file.
#include <iostream>
#include <SDL2/SDL.h>




// Screan class definition.
class Screen
{
	// All methods declared in this class.
	public:
			// Constructor
			Screen();

			// A method used to initialize the whole program.
			bool init();

			// A method used to check for events and keep the program running.
			bool processEvents();

			// A method used to update the program as it runs.
			void update();

			// A method used to set the pixels on the screen.
			void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);

			// A method used to blur the particles.
			void boxBlur();

			// A method used to close the whole program and clean everything up.
			void close();



	// All data members used in this class.
	public:
		// Variables used to hold the screen width and height.
		const static int SCREEN_WIDTH = 800;
		const static int SCREEN_HEIGHT = 600;
	private:
		// Variables used to hold the SDL types.
		SDL_Window *m_window;
		SDL_Renderer *m_renderer;
		SDL_Texture *m_texture;
		uint32_t *m_buffer1;
		uint32_t *m_buffer2;
};




// End of header file
#endif
