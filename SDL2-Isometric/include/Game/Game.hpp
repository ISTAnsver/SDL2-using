#ifndef GAME_HPP
#define GAME_HPP

#include <SDL.h>
#include "Graphics/Drawable.hpp"
#include "World/WorldIsometric.hpp"

/**
 * @brief Represent a game
 * 
 */
class Game
{
    SDL_Surface *m_surface;
    bool m_running;

    WorldIsometric m_world;

    static SDL_Renderer *m_renderer;
    static int  m_viewportWidth, m_viewportHeight;

public:

    /**
     * @brief Construct a new Game object
     * 
     */
    Game();

    /**
     * @brief Destroy the Game object
     * 
     */
    ~Game();

    /**
     * @brief initializes environment
     */
    void initialize(SDL_Window *window, int viewportWidth, int viewportHeight);

    /**
     * @brief Renders all at the screen
     * 
     */
    void render();

    /**
     * @brief Handles user input events
     * 
     */
    void handleEvent();

    /**
     * @brief Clean all game resources
     * 
     */
    void clean();

    /**
     * @brief Defines that game running or not
     * 
     * @return true when runnig
     * @return false when not
     */
    bool running();

    /**
     * @brief Returns renderer for drawing
     * 
     * @return renderer if app was initialize else nullptr
     */
    static SDL_Renderer* renderer();

    /**
     * @brief Returns viewport width
     * 
     * @return viewport width 
     */
    static int viewportWidth();

    /**
     * @brief Returns viewport height
     * 
     * @return viewport height 
     */
    static int viewportHeight();
};

#endif // GAME_HPP