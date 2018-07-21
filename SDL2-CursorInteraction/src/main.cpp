#include "Application/ApplicationSDL2.hpp"

int main(int argc, char **argv)
{
    Application *app = new ApplicationSDL2();
    app->start(argc, argv);
    // TODO: [ISTAnsver] Process all status here
    delete app;
    return 0;
}