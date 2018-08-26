#include "World/WorldIsometric.hpp"

WorldIsometric::WorldIsometric()
{

}

WorldIsometric::~WorldIsometric()
{
    delete m_map;
}

void WorldIsometric::cartesianToIsometric(int &x, int &y) const
{
    int tempX = x, tempY = y;
    x = tempX - tempY;
    y = (tempX + tempY) / 2;
}

void WorldIsometric::isometricToCartesian(int &x, int &y) const
{
    int tempX = x, tempY = y;
    x = (2 * tempY + tempX) / 2;
    y = (2 * tempY - tempX) / 2;
}

void WorldIsometric::draw() const
{
    m_map->draw();
}

void WorldIsometric::loadMap(const Map *const map)
{
    m_map = map;
}