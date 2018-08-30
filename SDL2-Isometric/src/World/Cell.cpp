#include "World/Cell.hpp"
#include "Game/Game.hpp"

Cell::Cell(const char *source, int width, int length) : m_source(source)
{
    m_width = width;
    m_length = m_length;
    m_x = 0;
    m_y = 0;
}

Cell::~Cell()
{
    delete m_source;
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

void Cell::setPosition(int x, int y)
{
    m_x = x;
    m_y = y;
}

int Cell::x() const
{
    return m_x;
}

int Cell::y() const
{
    return m_y;
}

void Cell::draw() const
{
    SDL_Renderer *renderer = Game::renderer();
    SDL_Surface *tileSurface = SDL_LoadBMP(m_source);
    SDL_Texture *tile = SDL_CreateTextureFromSurface(renderer, tileSurface);
    SDL_FreeSurface(tileSurface);
    SDL_Rect srect;
    srect.x = 0;
    srect.y = 0;
    srect.w = 51;
    srect.h = 25;
    SDL_Rect drect;
    int centerx = Game::viewportWidth() / 2 - 51 / 2;
    int centery = Game::viewportHeight() / 2 - 25 / 2;
    float isox = m_x - m_y;
    float isoy = (float)(m_x + m_y) / 2;
    drect.x = centerx + (isox * 51 / 2);// + m_x - m_y;
    drect.y = centery + (isoy * 25); //+ (m_x + m_y) / 2;
    drect.w = 51;
    drect.h = 25;
    SDL_RenderCopy(renderer, tile, &srect, &drect);
    SDL_DestroyTexture(tile);
}