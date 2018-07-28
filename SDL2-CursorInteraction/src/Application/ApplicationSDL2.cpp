#include "Application/ApplicationSDL2.hpp"

ApplicationSDL2::ApplicationSDL2()
{
    m_running = false;

    m_window = nullptr;
    m_screen = nullptr;
}

ApplicationSDL2::~ApplicationSDL2()
{
    delete m_screen;
}

void ApplicationSDL2::start(int argc, char **argv)
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        return;
    }

    m_window = SDL_CreateWindow("SDL2-CursorInteraction",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600, 0);

    if (m_window == nullptr)
    {
        return;
    }

    m_screen = SDL_GetWindowSurface(m_window);
    m_running = true;

    SDL_Rect obj;
    obj.h = 100;
    obj.w = 100;
    obj.x = 800 / 2 - 50;
    obj.y = 600 / 2 - 50;

    SDL_Renderer *renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Surface *mouseCursorSurface = SDL_LoadBMP("resources/SimpleSword.bmp");
    SDL_Cursor *defaultCursor = SDL_GetCursor();
    SDL_Cursor *cursor = SDL_CreateColorCursor(mouseCursorSurface, 0, 0);

    while(m_running)
    {
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_KEYDOWN:
                    if(event.key.keysym.scancode == SDL_SCANCODE_ESCAPE)
                    {
                        stop();
                    }
                    break;
                case SDL_MOUSEMOTION:
                    if(event.motion.x >= obj.x && event.motion.y >= obj.y && 
                        event.motion.x <= obj.x + obj.w && event.motion.y <= obj.y + obj.h)
                    {
                        SDL_SetCursor(cursor);
                    }
                    else
                    {
                        SDL_SetCursor(defaultCursor);
                    }
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_Rect rect = obj;
        SDL_RenderDrawRect(renderer, &rect);
        SDL_RenderPresent(renderer);
    }

    SDL_FreeCursor(cursor);
    SDL_FreeSurface(mouseCursorSurface);
}

void ApplicationSDL2::stop()
{
    m_running = false;

    SDL_DestroyWindow(m_window);
    SDL_Quit();
}


