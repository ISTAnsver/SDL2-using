#include "World/Cell.hpp"
#include "Game/Game.hpp"

Cell::Cell(char *source, int width, int length)
{
    m_source = source;
    m_width = width;
    m_length = m_length;
}

Cell::~Cell()
{
    delete m_source;
}

void Cell::setSource(char *source)
{
    m_source = source;
}

void Cell::setSize(int width, int length)
{
    m_width = width;
    m_length = length;
}

int Cell::width() const
{
    return m_width;
}

int Cell::length() const
{
    return m_length;
}

void Cell::draw() const
{
    Game *game = Game::instance();
    SDL_Renderer *renderer = game->renderer();
}