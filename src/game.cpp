#include "game.h"

Game::Game(GameEngine &e) : gameEngine(e) {}

void Game::run() {
  gameEngine.init();

  floorTex = gameEngine.loadTexture("assets/floor.png");
  dinoRunTex = gameEngine.loadTexture("assets/dino-run.png");
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
  if (walkTimer >= walkFrameDuration) {
    walkTimer -= walkFrameDuration;
    dinoFrame = (dinoFrame + 1) % 2;
  }
}

void Game::draw() {
  const float width = gameEngine.textureWidth(floorTex);
  for (float x = scrollX; x < gameEngine.screenWidth(); x += width) {
    gameEngine.drawTexture(floorTex, x, floorY);
  }
  gameEngine.drawTextureRec(dinoRunTex, {dinoFrame * 88.0f, 0.0f, 88.0f, 85.0f},
                            100, floorY - 70);
}
