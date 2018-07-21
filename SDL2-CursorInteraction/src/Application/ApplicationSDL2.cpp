#include "Application/ApplicationSDL2.hpp"

ApplicationSDL2::ApplicationSDL2()
{
    m_status = false;
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
        // TODO: [ISTAnver] set status
        return;
    }

    m_window = SDL_CreateWindow("SDL2-CursorInteraction",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600, 0);

    if (m_window == nullptr)
    {
        // TODO: [ISTAnsver] set status
        return;
    }

    m_screen = SDL_GetWindowSurface(m_window);
    m_running = true;
    m_status = true;

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
            }
        }
    }
}

bool ApplicationSDL2::status()
{
    return m_status;
}

void ApplicationSDL2::stop()
{
    m_status = false;
    m_running = false;

    SDL_DestroyWindow(m_window);
    SDL_Quit();
}


