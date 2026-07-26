#pragma once
#include "entity.h"

class Dinosaur : public Entity {
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

  static constexpr float walkFrameDuration = 0.15f;
  static constexpr float kFrameWidth = 88.0f;
  static constexpr float kFrameHeight = 85.0f;
  static constexpr float kDrawX = 100.0f;
  static constexpr float kDrawYOffset = 70.0f;
};
