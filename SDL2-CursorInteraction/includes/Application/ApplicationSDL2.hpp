#ifndef APPLICATION_SDL2_HPP
#define APPLICATION_SDL2_HPP

#include "Application.hpp"
#include "SDL.h"

/**
 * @brief Class of application working on SDL2
 * 
 */
class ApplicationSDL2 : public Application
{

    /**
     * @brief let to know that application running or not
     * 
     */
    bool m_running;

    /**
     * @brief current status of application
     * 
     */
    bool m_status;

    /**
     * @brief window of application
     * 
     */
    SDL_Window *m_window;

    /**
     * @brief surface of window
     * 
     */
    SDL_Surface *m_screen;
public:
    /**
     * @brief Construct a new ApplicationSDL2 object
     * 
     */
    ApplicationSDL2();

    /**
     * @brief Destroy the ApplicationSDL2 object
     * 
     */
    ~ApplicationSDL2();

    /**
     * @brief Run an SDL2 application
     * 
     * @param argc count of arguments
     * @param argv list of arguments
     */
    void start(int argc, char **argv) override;

    /**
     * @brief Let to know current status of applicaotion
     * 
     * @return true when application is running
     * @return false when application stopped
     */
    bool status() override;

    /**
     * @brief Stopping the work of application
     * 
     */
    void stop() override;
};

#endif // APPLICATION_SDL2_HPP