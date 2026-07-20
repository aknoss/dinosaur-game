#include "game.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

void Game::run() {
  gameEngine.init();

  floorTex = gameEngine.loadTexture("assets/floor.png");
  dinoLeftRunTex = gameEngine.loadTexture("assets/dino-left-run.png");
  dinoRightRunTex = gameEngine.loadTexture("assets/dino-right-run.png");
  actualDinoRunTex = dinoLeftRunTex;
  floorY = gameEngine.screenHeight() - gameEngine.textureHeight(floorTex);

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

  walkTimer += gameEngine.deltaTime();
  if (walkTimer >= 0.5f) {
    walkTimer = 0.0f;
    actualDinoRunTex = dinoLeftRunTex;
  } else {
    actualDinoRunTex = dinoRightRunTex;
  }
}

void Game::draw() {
  const float width = gameEngine.textureWidth(floorTex);
  for (float x = scrollX; x < gameEngine.screenWidth(); x += width) {
    gameEngine.drawTexture(floorTex, x, floorY);
  }
  gameEngine.drawTexture(actualDinoRunTex, 100, floorY - 70);
}
