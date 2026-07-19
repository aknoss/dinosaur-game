#pragma once
#include "gameEngine.h"

class Game {
  GameEngine &gameEngine;

public:
  Game(GameEngine &e);
  void run();
};
