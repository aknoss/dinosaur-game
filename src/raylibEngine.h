#pragma once
#include "gameEngine.h"

class RaylibEngine : public GameEngine {
private:
  static constexpr int screenWidth = 800;
  static constexpr int screenHeight = 450;
  static constexpr char gameName[] = "Dinosaur Game";

public:
  ~RaylibEngine() = default;

  void init() const override;
  void draw(char[]) const override;
  bool shouldClose() const override;
  void close() const override;
};
