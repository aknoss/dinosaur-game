#pragma once
#include "entity.h"

class Floor : public Entity {
public:
  Floor(GameEngine &gameEngine);
  void update() override;
  void draw() override;
  float getFloorY();

private:
  static constexpr float scrollSpeed = 200.0f;
  static constexpr float floorOffset = 10.0f;

  GameEngine &gameEngine;
  GameEngine::TextureId floorTex = 0;
  float texWidth = 0.0f;
  float floorY = 0.0f;
  float scrollX = 0.0f;
};
