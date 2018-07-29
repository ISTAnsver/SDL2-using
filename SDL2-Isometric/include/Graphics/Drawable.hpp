#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

/**
 * @brief Abstaction of drawable objects
 * 
 */
class Drawable {
public:
    /**
     * @brief Destroy the Drawable object
     * 
     */
    virtual ~Drawable() {}

    /**
     * @brief Draws at the screen
     * 
     */
    virtual void draw() const = 0;
};

#endif // DRAWABLE_HPP