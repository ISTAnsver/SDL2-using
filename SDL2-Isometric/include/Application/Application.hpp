#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SDL.h>

class Application
{
    char *m_title;
    int m_posx;
    int m_posy;
    int m_width;
    int m_height;
    bool m_fullscreen;
    bool m_started;

    SDL_Window *m_window;
public:

    /**
     * @brief Construct a new Application object
     * 
     * @param title name of application
     * @param posx position at x axis on the screen
     * @param posy position at y axis on the screen
     * @param width width of application window
     * @param height height of application window
     * @param fullscreen defines that application will be started in fullscreen mode or not
     */
    Application(char *title, int posx, int posy, int width, int height, bool fullscreen);

    /**
     * @brief Destroy the Application object
     * 
     */
    ~Application();
    
    /**
     * @brief Starts the application
     */
    void start();
};

#endif // APPLICATOIN_HPP