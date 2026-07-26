#include "floor.h"

Floor::Floor(GameEngine &e) : gameEngine(e) {
  floorTex = gameEngine.loadTexture("assets/floor.png");

  floorY = gameEngine.screenHeight() - gameEngine.textureHeight(floorTex) -
           floorOffset;
}

void Floor::update() {
  scrollX -= scrollSpeed * gameEngine.deltaTime();
  const float width = gameEngine.textureWidth(floorTex);
  if (scrollX <= -width) {
    scrollX += width;
  }
}

void Floor::draw() {
  const float width = gameEngine.textureWidth(floorTex);
  for (float x = scrollX; x < gameEngine.screenWidth(); x += width) {
    gameEngine.drawTexture(floorTex, x, floorY);
  }
}

float Floor::getFloorY() { return floorY; }
