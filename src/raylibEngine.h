#pragma once
#include "gameEngine.h"

class RaylibEngine : public GameEngine {
private:
  static constexpr int screenWidth = 1280;
  static constexpr int screenHeight = 720;
  static constexpr char gameName[] = "Dinosaur Game";

public:
  ~RaylibEngine() = default;

  void init() const override;
  void beginDrawing() const override;
  void endDrawing() const override;
  void drawTexture() const override;
  bool shouldClose() const override;
  void close() const override;
};
