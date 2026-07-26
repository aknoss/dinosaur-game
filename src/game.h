#pragma once
#include "entities/dinosaur.h"
#include "gameEngine.h"

class Game {

public:
  Game(GameEngine &e);
  ~Game();
  void run();

private:
  GameEngine &gameEngine;
  static constexpr float scrollSpeed = 200.0f;
  static constexpr float floorOffset = 10.0f;
  GameEngine::TextureId floorTex = 0;
  float scrollX = 0.0f;
  float floorY = 0.0f;
  Dinosaur *dinosaur = nullptr;
  void update();
  void draw();
};
