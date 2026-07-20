#pragma once
#include "gameEngine.h"

class Game {
  GameEngine &gameEngine;

  GameEngine::TextureId floorTex = 0;
  GameEngine::TextureId dinoLeftRunTex = 0;
  GameEngine::TextureId dinoRightRunTex = 0;
  GameEngine::TextureId actualDinoRunTex = 0;
  float scrollX = 0.0f;
  float floorY = 0.0f;
  float walkTimer = 0.0f;
  static constexpr float scrollSpeed = 200.0f; // pixels per second

public:
  Game(GameEngine &e);
  void run();

private:
  void update();
  void draw();
};
