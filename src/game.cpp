#include "game.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

Game::~Game() { delete dinosaur; }

void Game::run() {
  gameEngine.init();

  floor = new Floor(gameEngine);
  dinosaur = new Dinosaur(gameEngine, floor->getFloorY());

  while (!gameEngine.shouldClose()) {
    update();

    gameEngine.beginDrawing();
    draw();
    gameEngine.endDrawing();
  }
  gameEngine.close();
}

void Game::update() {
  floor->update();
  dinosaur->update();
}

void Game::draw() {
  floor->draw();
  dinosaur->draw();
}
