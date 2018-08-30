
#include "Application/Application.hpp"

int main(int argc, char **argv)
{
    Application *app = new Application("SDL2-Isometric", 0, 0, 1920, 1080, true);
    app->start();
    delete app;
    return 0;
}