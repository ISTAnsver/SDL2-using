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

bool Application::start()
{
    Game *game = Game::instance();
    game->initialize();
    if(game->initialized());
    {
        while(game->running())
        {
            game->handleEvent();
            game->render();
        }
        game->clean();
    }
}