#ifndef WORLDISOMETRIC_HPP
#define WORLDISOMETRIC_HPP

#include "World.hpp"
#include "Map.hpp"

/**
 * @brief Represents world in isometric perspective
 * 
 */
class WorldIsometric : public World {
    const Map *m_map;
public:
    /**
     * @brief Construct a new Wolrd Isometric object
     * 
     * @param map map of the world
     */
    WorldIsometric();
    /**
     * @brief Destroy the Wolrd Isometric object
     * 
     */
    ~WorldIsometric();

    /**
     * @brief Transforms cartesian coordinates to isometric coordinates
     * 
     * @param x cartesian x coordinate
     * @param y cartesian y coordinate
     */
    void cartesianToIsometric(int &x, int &y) const;

    /**
     * @brief Transforms isometric coordinates to cartesian coordinates
     * 
     * @param x isometric x coordinate
     * @param y isometric y coordinate
     */
    void isometricToCartesian(int &x, int &y) const;

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
    void loadMap(const Map *const map) override;
};

#endif