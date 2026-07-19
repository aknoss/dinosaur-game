#include "game.h"
#include "raylibEngine.h"

int main() {
  RaylibEngine raylibEngine;
  Game game(raylibEngine);

  game.run();

  return 0;
}
