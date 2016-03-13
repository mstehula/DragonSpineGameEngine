
#include "Debug.h"
#include "Game.h"

#define WIDTH 800
#define HEIGHT 600

using namespace DragonSpineGameEngine;

int main()
{
    setDebugLevel(DEBUG_ALL);

    debug("Welcome to DragonSpine Game Engine\n");
    debug("DragonSpine Game Engine initializing...\n");

    Game game;
    game.start();

    debug("DragonSpine Game Engine shutting down...\n");
    debug("DragonSpine Game Engine complete\n");
    return 0;
}
