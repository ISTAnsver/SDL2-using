#ifndef CELL_HPP
#define CELL_HPP

#include "Graphics/Drawable.hpp"

/**
 * @brief Represents cell of a map
 * 
 */
class Cell : public Drawable {
    char *m_source;
    int m_width;
    int m_length;
public:
    /**
     * @brief Construct a new Cell object
     * 
     * @param source source of an image
     * @param width width of a cell
     * @param length length of a cell
     */
    Cell(char *source, int width, int length);

    /**
     * @brief Destroy the Cell object
     * 
     */
    ~Cell();

    /**
     * @brief Set the source image of cell
     * 
     * @param source source of an image
     */
    void setSource(char *source);

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
     * @brief Draws cell at the screen
     * 
     */
    void draw() const override;
};

#endif // CELL_HPP