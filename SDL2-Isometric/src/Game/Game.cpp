#include "Game/Game.hpp"

Game *Game::m_game = nullptr;

Game::Game()
{

}

Game::~Game()
{

}

Game *Game::instance()
{
    if (m_game != nullptr)
        return m_game;

    m_game = new Game();
    return m_game;
}

void Game::initialize()
{
    //TODO: [ISTAnsver] implement
    return;
}

bool Game::initialized()
{
    return m_initialized;
}

void Game::render()
{
    //TODO: [ISTAnsver] implement
    return;
}

void Game::handleEvent()
{
    //TODO: [ISTAnsver] implement
    return;
}

void Game::clean()
{
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    delete m_game;
}

bool Game::running()
{
    return m_running;
}

SDL_Renderer* Game::renderer()
{
    return m_renderer;
}