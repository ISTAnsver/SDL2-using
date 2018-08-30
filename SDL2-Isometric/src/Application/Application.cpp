#include "Application/Application.hpp"
#include "Game/Game.hpp"

Application::Application(char *title, int posx, int posy, int width, int height, bool fullscreen)
{
    m_title = title;
    m_posx = posx;
    m_posy = posy;
    m_width = width;
    m_height = height;
    m_fullscreen = fullscreen;
}

Application::~Application()
{
    
}

void Application::start()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        m_started = false;
        return;
    }

    Uint32 flags = 0;

    if (m_fullscreen) {
        flags = flags | SDL_WINDOW_FULLSCREEN;
    }

    m_window = SDL_CreateWindow(m_title,
        m_posx, m_posy,
        m_width, m_height, flags);

    if (m_window == nullptr)
    {
        m_started = false;
    }

    
    if(m_started);
    {
        Game *game = new Game();
        game->initialize(m_window, m_width, m_height);

        while(game->running())
        {
            game->handleEvent();
            game->render();
        }
        game->clean();
        SDL_DestroyWindow(m_window);
    }
}