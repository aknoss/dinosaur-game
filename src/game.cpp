#include "game.h"
#include "entities/dinosaur.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

Game::~Game() { delete dinosaur; }

void Game::run() {
  gameEngine.init();

  floorTex = gameEngine.loadTexture("assets/floor.png");
  floorY = gameEngine.screenHeight() - gameEngine.textureHeight(floorTex) -
           floorOffset;
  dinosaur = new Dinosaur(gameEngine, floorY);

  while (!gameEngine.shouldClose()) {
    update();

    gameEngine.beginDrawing();
    draw();
    gameEngine.endDrawing();
  }
  gameEngine.close();
}

void Game::update() {
  scrollX -= scrollSpeed * gameEngine.deltaTime();

  const float width = gameEngine.textureWidth(floorTex);
  if (scrollX <= -width) {
    scrollX += width;
  }

  dinosaur->update();
}

void Game::draw() {
  const float width = gameEngine.textureWidth(floorTex);
  for (float x = scrollX; x < gameEngine.screenWidth(); x += width) {
    gameEngine.drawTexture(floorTex, x, floorY);
  }

  dinosaur->draw();
}
