#ifndef GAME_HPP
#define GAME_HPP

#include <SDL.h>

/**
 * @brief Represent a game
 * 
 */
class Game
{
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    bool m_initialized;
    bool m_running;

    static Game *m_game;

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

public:

    /**
     * @brief Returns instance of game
     * 
     * @return instance of game
     */
    static Game* instance();

    /**
     * @brief initializes environment
     */
    void initialize();

    /**
     * @brief Defines that environmet was initialized or not
     * 
     * @return true when environment initialized
     * @return false when environment didn't initialized
     */
    bool initialized();

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
    SDL_Renderer* renderer();
};

#endif // GAME_HPP