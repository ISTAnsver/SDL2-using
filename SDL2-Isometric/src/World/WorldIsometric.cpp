#include "World/WorldIsometric.hpp"

WorldIsometric::WorldIsometric()
{
    m_map = nullptr;
}

WorldIsometric::~WorldIsometric()
{
    delete m_map;
}

void WorldIsometric::draw() const
{
    if (m_map != nullptr)
        m_map->draw();
}

void WorldIsometric::loadMap(Map *map)
{
    m_map = map;
}