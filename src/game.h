#pragma once
#include "gameEngine.h"

class Game {
  GameEngine &gameEngine;

  GameEngine::TextureId floorTex = 0;
  GameEngine::TextureId dinoRunTex = 0;
  int dinoFrame = 0;
  float scrollX = 0.0f;
  float floorY = 0.0f;
  float walkTimer = 0.0f;
  static constexpr float scrollSpeed = 200.0f; // pixels per second
  static constexpr float walkFrameDuration = 0.15f;

public:
  Game(GameEngine &e);
  void run();

private:
  void update();
  void draw();
};
