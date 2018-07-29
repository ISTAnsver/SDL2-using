#ifndef CELL_HPP
#define CELL_HPP

#include "Graphics/Drawable.hpp"

/**
 * @brief Represents cell of a map
 * 
 */
class Cell : public Drawable {
    char *source;
public:
    /**
     * @brief Construct a new Cell object
     * 
     * @param source source of an image
     * @param width width of a cell
     * @param length length of a cell
     */
    Cell(char *source, int width, int length);
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
     * @param height length of the cell
     */
    void setSize(int width, int height);

    /**
     * @brief Draws cell at the screen
     * 
     */
    void draw() const override;
};

#endif // CELL_HPP