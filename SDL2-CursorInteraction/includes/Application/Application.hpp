#ifndef APPLICATION_HPP
#define APPLICATION_HPP

/**
 * @brief Interface of application
 * 
 */
class Application
{
public:
    /**
     * @brief Destroy the Application object
     * 
     */
    virtual ~Application() {};

    /**
     * @brief Run an application
     * 
     * @param argc count of arguments
     * @param argv list of arguments
     */
    virtual void start(int argc, char **argv) = 0;

    // TODO: [ISTAnsver] must return status that isn't boolean
    /**
     * @brief Let to know current status of applicaotion
     * 
     * @return true when application is running
     * @return false when application stopped
     */
    virtual bool status() = 0;

    /**
     * @brief Stopping the work of application
     * 
     */
    virtual void stop() = 0;
};

#endif // APPLICATION_HPP