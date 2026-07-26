#include "dinosaur.h"

Dinosaur::Dinosaur(GameEngine &e, float floorY)
    : gameEngine(e), floorY(floorY) {
  dinoRunTex = gameEngine.loadTexture("assets/dino-run.png");
}

void Dinosaur::update() {
  walkTimer += gameEngine.deltaTime();
  if (walkTimer >= walkFrameDuration) {
    walkTimer -= walkFrameDuration;
    dinoFrame = (dinoFrame + 1) % 2;
  }
}

void Dinosaur::draw() {
  gameEngine.drawTextureRec(
      dinoRunTex, {dinoFrame * kFrameWidth, 0.0f, kFrameWidth, kFrameHeight},
      kDrawX, floorY - kDrawYOffset);
}
