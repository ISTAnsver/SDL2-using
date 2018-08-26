#ifndef  MAP_HPP
#define MAP_HPP

#include "Cell.hpp"

/**
 * @brief Represents map of the world
 * 
 */
class Map : public Drawable {
    int m_width, m_length;
    Cell ***m_cells;
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
     * @brief Set new cell value at the specified position
     * 
     * @param x position at x axis
     * @param y position at y axis
     */
    void setCell(int x, int y, Cell *cell);

    /**
     * @brief Returns cell in specified position
     * 
     * @param x position at x axis
     * @param y position at y axis
     * @return cell in specified position
     */
    const Cell& cell(int x, int y) const;

    /**
     * @brief Draws map at the screen
     * 
     */
    void draw() const override;
};

#endif // MAP_HPP