#ifndef WORLDISOMETRIC_HPP
#define WORLDISOMETRIC_HPP

#include "World.hpp"
#include "Map.hpp"

/**
 * @brief Represents world in isometric perspective
 * 
 */
class WolrdIsometric : public World {
    const Map *m_map;
public:
    /**
     * @brief Construct a new Wolrd Isometric object
     * 
     * @param map map of the world
     */
    WolrdIsometric();
    /**
     * @brief Destroy the Wolrd Isometric object
     * 
     */
    ~WolrdIsometric();

    /**
     * @brief Draws world at the screen
     * 
     */
    void draw() const override;

    /**
     * @brief Load specified map
     * 
     * @param map map that will be load
     */
    void loadMap(const Map *const map);
};

#endif