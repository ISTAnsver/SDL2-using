#include "World/Map.hpp"
#include "Game/Game.hpp"

Map::Map(int width, int length)
{
    m_width = width;
    m_length = length;
    m_cells = new Cell**[m_length];
    for(int i = 0; i < m_length; i++)
        m_cells[i] = new Cell*[m_width];

    for (int i = 0; i < m_length; i++)
        for(int j = 0; j < m_width; j++)
            m_cells[i][j] = nullptr;
}

Map::~Map()
{
    for(int i = 0; i < m_length; i++)
        for(int j = 0; j < m_width; j++)
            delete m_cells[i][j];

    for(int i = 0; i < m_length; i++)
        delete[] m_cells[i];

    delete[] m_cells;    
}

void Map::placeCell(int x, int y, Cell *cell)
{
    cell->setPosition(x, y);
    m_cells[y][x] = cell;
}

const Cell& Map::cell(int x, int y) const
{
    return *m_cells[y][x];
}

void Map::draw() const
{
    for(int i = 0; i < m_length; i++)
        for(int j = 0; j < m_width; j++)
            m_cells[i][j]->draw();
}

