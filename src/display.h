
#ifndef display_H
#define display_H

#include <SDL2/SDL.h>

class Display
{
public:
	int w, h;
	SDL_Window *window;
	SDL_Renderer *renderer;

	Display (char *wndName = "Hello World!", int w = 800, int h = 600);
	~Display ();
	void clear ();
	void present ();
	void resize (int w, int h);
};

#endif

