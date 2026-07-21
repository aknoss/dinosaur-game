#pragma once
#include "gameEngine.h"
#include "raylib.h"
#include <vector>

class RaylibEngine : public GameEngine {
private:
  static constexpr int kScreenWidth = 1280;
  static constexpr int kScreenHeight = 720;
  static constexpr char gameName[] = "Dinosaur Game";

  std::vector<Texture2D> textures;

public:
  ~RaylibEngine() = default;

  void init() const override;
  void beginDrawing() const override;
  void endDrawing() const override;
  bool shouldClose() const override;
  void close() const override;

  float deltaTime() const override;
  int screenWidth() const override;
  int screenHeight() const override;
  TextureId loadTexture(const char *path) override;
  int textureWidth(TextureId id) const override;
  int textureHeight(TextureId id) const override;
  void drawTexture(TextureId id, float x, float y) const override;
  void drawTextureRec(TextureId id, Rect source, float x,
                      float y) const override;
};
