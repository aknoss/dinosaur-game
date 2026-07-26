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
  gameEngine.drawTextureRec(dinoRunTex, {dinoFrame * 88.0f, 0.0f, 88.0f, 85.0f},
                            100, floorY - 70);
}
