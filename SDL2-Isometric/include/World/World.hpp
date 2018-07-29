#ifndef WORLD_HPP
#define WORLD_HPP

#include "Map.hpp"
#include "Graphics/Drawable.hpp"

/**
 * @brief Abstraction of game world
 * 
 */
class World : public Drawable {
public: 
    /**
     * @brief Destroy the World object
     * 
     */
    virtual ~World() {};

    /**
     * @brief loadMap
     * 
     * @param map 
     */
    virtual void loadMap(const Map *const map) = 0; 
};

#endif // WORLD_HPP