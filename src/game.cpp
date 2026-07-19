#include "game.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

void Game::run() {
  gameEngine.init();
  while (!gameEngine.shouldClose()) {
    gameEngine.draw((char[]){"Welcome to the Dinosaur game"});
  }
  gameEngine.close();
};
