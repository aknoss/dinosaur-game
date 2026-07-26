#pragma once
#include "entities/dinosaur.h"
#include "entities/floor.h"
#include "gameEngine.h"

class Game {

public:
  Game(GameEngine &e);
  ~Game();
  void run();

private:
  GameEngine &gameEngine;
  Dinosaur *dinosaur = nullptr;
  Floor *floor = nullptr;
  void update();
  void draw();
};
