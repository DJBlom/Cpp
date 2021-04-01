/* Contents: Implementations of class Screen
 *
 * Author: Dawid Blom
 *
 * Date: 29/03/2021
 */

// All libraries used in this file.
#include "screen.h"


// Implementation of constructor that takes no parameters.
Screen::Screen(): m_window(nullptr), m_renderer(nullptr), m_texture(nullptr), m_buffer1(nullptr), m_buffer2(nullptr) {}





// Implementation of the init() method.
bool Screen::init()
{
	// Checking if the initialization went through.
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		// If it did not go through display this, and return false.
		std::cout << "SDL INIT Failed." << SDL_GetError() << std::endl;
		return false;
	}



	// Creating a sdl window with certain specifications.
	m_window = SDL_CreateWindow("Explosion",
				     SDL_WINDOWPOS_UNDEFINED, 
				     SDL_WINDOWPOS_UNDEFINED, 
				     this -> SCREEN_WIDTH,
				     this -> SCREEN_HEIGHT,
				     SDL_WINDOW_SHOWN);

	// If the window was not created quit and exit the method.
	if (m_window == nullptr)
	{
		SDL_Quit();
		return false;
	}




	// Creating a renderer.
	m_renderer = SDL_CreateRenderer(this ->m_window, 
					-1, 
					SDL_RENDERER_PRESENTVSYNC);
	// If the renderer was not created quit and exit the method.
	if (m_renderer == nullptr)
	{
		SDL_DestroyWindow(this -> m_window);
		SDL_Quit();
		return false;
	}




	// Creating a texture.
	m_texture = SDL_CreateTexture(this -> m_renderer,
				      SDL_PIXELFORMAT_RGBA8888,
				      SDL_TEXTUREACCESS_STATIC,
				      this -> SCREEN_WIDTH, this -> SCREEN_HEIGHT);
	// If the texture was not created, quit and exit method.
	if (this -> m_texture == nullptr)
	{
		std::cout << "Could not create texture." << SDL_GetError() << std::endl;
		SDL_DestroyRenderer(this -> m_renderer);
		SDL_DestroyWindow(this -> m_window);
		SDL_Quit();
		return false;
	}




	// Creating a buffer.
	m_buffer1 = new uint32_t[this -> SCREEN_WIDTH * this -> SCREEN_HEIGHT];
	m_buffer2 = new uint32_t[this -> SCREEN_WIDTH * this -> SCREEN_HEIGHT];

	// Filling a block of memory with specific information.
	memset(this -> m_buffer1, 0, this -> SCREEN_WIDTH * this -> SCREEN_HEIGHT * sizeof(Uint32));
	memset(this -> m_buffer2, 0, this -> SCREEN_WIDTH * this -> SCREEN_HEIGHT * sizeof(Uint32));


	return true;
}



// Implementation of the processEvents() method.
bool Screen::processEvents()
{
	// Declaring the event variable.
	SDL_Event event;


	// Keep running and updating the loop until the quit event is triggered.
	// Then exit the loop and close the window.
	while (SDL_PollEvent (&event))
	{
		if (event.type == SDL_QUIT)
		{
			return false;
		}
	}

	// Return true if no quit event was triggered.
	return true;
}




// Implementation of the update() method.
void Screen::update()
{
	// Updating, clearing, copying and presenting of texture and renderer.
	SDL_UpdateTexture(this -> m_texture, nullptr, this -> m_buffer1, this -> SCREEN_WIDTH * sizeof(uint32_t));
	SDL_RenderClear(this -> m_renderer);
	SDL_RenderCopy(this -> m_renderer, this -> m_texture, nullptr, nullptr);
	SDL_RenderPresent(this -> m_renderer);
}




// Implementation of the setPixel() method.
void Screen::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue)
{
	// Making sure the pixels stay on the boundries of the screen provided.
	if (x < 0 || x >= this -> SCREEN_WIDTH || y < 0 || y >= this -> SCREEN_HEIGHT)
	{
		return;
	}


	// 32 bit int for variable color.
	uint32_t color = 0;

	// Assinging all the arguments to the variable color and bit shifting them by 8 bits.
	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	color += 0xFF;

	// Loading them into the buffer.
	this -> m_buffer1[(y * SCREEN_WIDTH) + x] = color;
}





// Implementation of boxBlur() method.
void Screen::boxBlur()
{
	// Swapping the two buffers.
	uint32_t *temp = this -> m_buffer1;
	this -> m_buffer1 = this -> m_buffer2;
	this -> m_buffer2 = temp;


	// Keep bluring the screen more and more.
	for (int y = 0; y < this -> SCREEN_HEIGHT; y++)
	{
		for (int x = 0; x < this -> SCREEN_WIDTH; x++)
		{
			// Varaibles to hold the color.
			int redTotal = 0;
			int greenTotal = 0;
			int blueTotal = 0;

			for (int row = -1; row <= 1; row++)
			{
				for (int col = -1; col <= 1; col++)
				{
					// Getting the current pixels on the screen.
					int currentX = x + col;
					int currentY = y + row;

					// Adding all the color values to the pixels if the condition is met.
					if (currentX >= 0 && currentX < this -> SCREEN_WIDTH 
					    && currentY >= 0 && currentY < this -> SCREEN_HEIGHT)
					{
						// getting the color from the buffer.
						uint32_t color = m_buffer2[currentY * this -> SCREEN_WIDTH + currentX];

						// Bit shifting the colors again.
						uint8_t red = color >> 24;
						uint8_t green = color >> 16;
						uint8_t blue = color >> 8;

						redTotal += red;
						greenTotal += green;
						blueTotal += blue;
					}
				}
			}

			// Updating the colors after they have been blurred.
			uint8_t red = redTotal / 9;
			uint8_t green = greenTotal / 9;
			uint8_t blue = blueTotal / 9;

			// Setting the blurred pixels on screen.
			setPixel(x, y, red, green, blue);
		}
	}
}



// Implementation of the close() method.
void Screen::close()
{
	// Clearing out all the memory that needs to be cleared out.
	delete this -> m_buffer1;
	delete this -> m_buffer2;
	SDL_DestroyRenderer(this -> m_renderer);
	SDL_DestroyTexture(this -> m_texture);
	SDL_DestroyWindow(this -> m_window);
	SDL_Quit();
}
