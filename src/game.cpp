#include "game.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

void Game::run() {
  gameEngine.init();
  while (!gameEngine.shouldClose()) {
    gameEngine.beginDrawing();

    gameEngine.endDrawing();
  }
  gameEngine.close();
};
