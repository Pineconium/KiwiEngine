/*
    KIWI BROWSER ENGINE SOURCE CODE
    Func?: Render the Window and GUI elements.
*/

/* includes */
#include <SDL2/SDL.h>
#include <stdio.h>
/* we also need proper HTML and other web rendering stuff */


/* main window */
int main()
{
    int quit = 0;
    SDL_Event event;
    SDL_Init(SDL_INIT_VIDEO);

    /* sure this means we can't maximize or resize the window, but again, prototype code */
    SDL_Window* screen = SDL_CreateWindow("Kiwi Browser (PROTOTYPE!)",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED, 720, 480, 0);
    
    
    while (!quit)
    {
        /* add code for browser UI stuff */

        SDL_WaitEvent(&event);
        if (event.type == SDL_QUIT)
            quit = 1;
    }
    SDL_Quit();
}
