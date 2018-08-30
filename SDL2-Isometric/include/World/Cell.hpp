#ifndef CELL_HPP
#define CELL_HPP

#include "Graphics/Drawable.hpp"

/**
 * @brief Represents cell of a map
 * 
 */
class Cell : public Drawable
{
    const char *m_source;
    int m_width, m_length, m_x, m_y;
public:

    /**
     * @brief Construct a new Cell object
     * 
     * @param source source of an image
     * @param width width of a cell
     * @param length length of a cell
     */
    Cell(const char *source, int width, int length);

    /**
     * @brief Destroy the Cell object
     * 
     */
    ~Cell();

    /**
     * @brief Set the size of cell
     * 
     * @param width width of the cell
     * @param length length of the cell
     */
    void setSize(int width, int length);

    /**
     * @brief Returns the width of cell
     * 
     * @return width of cell
     */
    int width() const;

    /**
     * @brief Returns the length of cell
     * 
     * @return length of cell
     */
    int length() const;

    /**
     * @brief Set the position of cell
     * 
     * @param x position at x axis
     * @param y position at y axis
     */
    void setPosition(int x, int y);

    /**
     * @brief Returns position of cell at x axis
     * 
     * @return position at x axis 
     */
    int x() const;

    /**
     * @brief Returns position of cell at y axis
     * 
     * @return position at y axis 
     */
    int y() const;

    /**
     * @brief Draws cell at the screen
     * 
     */
    void draw() const override;
};

#endif // CELL_HPP