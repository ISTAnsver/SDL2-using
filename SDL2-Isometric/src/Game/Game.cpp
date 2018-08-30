#include "Game/Game.hpp"

SDL_Renderer *Game::m_renderer = nullptr;
int Game::m_viewportWidth = 0;
int Game::m_viewportHeight = 0;

Game::Game()
{
    m_running = false;

    m_surface = nullptr;
    m_renderer = nullptr;
}

Game::~Game()
{

}

void Game::initialize(SDL_Window *window, int viewportWidth, int viewportHeight)
{
    m_surface = SDL_GetWindowSurface(window);
    m_renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    m_viewportWidth = viewportWidth;
    m_viewportHeight = viewportHeight;
    Map *map = new Map(2, 2);
    Cell *cell00 = new Cell("MyTile.bmp", 51, 25);
    Cell *cell10 = new Cell("MyTile.bmp", 51, 25);
    Cell *cell01 = new Cell("MyTile.bmp", 51, 25);
    Cell *cell11 = new Cell("MyTile.bmp", 51, 25);

    map->placeCell(0, 0, cell00);
    map->placeCell(1, 0, cell10);
    map->placeCell(0, 1, cell01);
    map->placeCell(1, 1, cell11);
    m_world.loadMap(map);

    m_running = true;
}

void Game::render()
{
    SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
    SDL_RenderClear(m_renderer);
    m_world.draw();
    SDL_RenderPresent(m_renderer);
}

void Game::handleEvent()
{
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_KEYDOWN:
                if(event.key.keysym.scancode == SDL_SCANCODE_ESCAPE)
                {
                    m_running = false;
                }
                break;
        }
    }
}

void Game::clean()
{
    SDL_DestroyRenderer(m_renderer);
    SDL_FreeSurface(m_surface);
}

bool Game::running()
{
    return m_running;
}


SDL_Renderer *Game::renderer()
{
    return m_renderer;
}

int Game::viewportWidth()
{
    return m_viewportWidth;
}

int Game::viewportHeight()
{
    return m_viewportHeight;
}