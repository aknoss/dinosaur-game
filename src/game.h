#pragma once
#include "gameEngine.h"

class Game {
  GameEngine &gameEngine;

  static constexpr float scrollSpeed = 200.0f;
  static constexpr float walkFrameDuration = 0.15f;
  static constexpr float floorOffset = 10.0f;

  GameEngine::TextureId floorTex = 0;
  GameEngine::TextureId dinoRunTex = 0;
  int dinoFrame = 0;
  float scrollX = 0.0f;
  float floorY = 0.0f;
  float walkTimer = 0.0f;

public:
  Game(GameEngine &e);
  void run();

private:
  void update();
  void draw();
};
