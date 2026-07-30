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

  static constexpr float gravity = 1400.0f;
  static constexpr float jumpForce = -550.0f;
  static constexpr float holdForce = -2200.0f;
  static constexpr float maxJumpVelocity = -900.0f;
  static constexpr float groundY = -2200.0f;
  static constexpr float walkFrameDuration = 0.15f;
  static constexpr float kFrameWidth = 88.0f;
  static constexpr float kFrameHeight = 85.0f;
  static constexpr float kDrawX = 100.0f;
  static constexpr float kDrawYOffset = 70.0f;
};
