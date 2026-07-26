#pragma once
#include "entity.h"

class Dinosaur : public Entity {
  static constexpr float walkFrameDuration = 0.15f;

public:
  Dinosaur(GameEngine &gameEngine, float floorY);
  void update() override;
  void draw() override;

private:
  GameEngine &gameEngine;
  float floorY;
  GameEngine::TextureId dinoRunTex = 0;
  int dinoFrame = 0;
  float walkTimer = 0.0f;
};
