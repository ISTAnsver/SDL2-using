#ifndef  MAP_HPP
#define MAP_HPP

#include "Cell.hpp"

/**
 * @brief Represents map of the world
 * 
 */
class Map {
    Cell **m_cells;
public:
    /**
     * @brief Construct a new Map object
     * 
     * @param width width of a map
     * @param length length of a map
     */
    Map(int width, int length);

    /**
     * @brief Destroy the Map object
     * 
     */
    ~Map();

    /**
     * @brief Returns 2D array of the cells
     * 
     * @return cells of a map
     */
    const Cell **const cells() const;

    /**
     * @brief Set new cell value at the specified position
     * 
     * @param x position at x axis
     * @param y position at y axis
     */
    void setCell(int x, int y, Cell *const cell);

    /**
     * @brief Returns cell in specified position
     * 
     * @param x position at x axis
     * @param y position at y axis
     * @return cell in specified position
     */
    const Cell *const cell(int x, int y) const;
};

#endif // MAP_HPP