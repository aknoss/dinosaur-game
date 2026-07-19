#include "raylibEngine.h"

void RaylibEngine::init() const {
  InitWindow(kScreenWidth, kScreenHeight, gameName);
  SetTargetFPS(60);
}

void RaylibEngine::beginDrawing() const {
  BeginDrawing();
  ClearBackground(RAYWHITE);
}

void RaylibEngine::endDrawing() const { EndDrawing(); }

bool RaylibEngine::shouldClose() const { return WindowShouldClose(); }

void RaylibEngine::close() const {
  for (const Texture2D &texture : textures)
    UnloadTexture(texture);
  CloseWindow();
}

float RaylibEngine::deltaTime() const { return GetFrameTime(); }

int RaylibEngine::screenWidth() const { return kScreenWidth; }

int RaylibEngine::screenHeight() const { return kScreenHeight; }

GameEngine::TextureId RaylibEngine::loadTexture(const char *path) {
  textures.push_back(LoadTexture(path));
  return static_cast<TextureId>(textures.size() - 1);
}

int RaylibEngine::textureWidth(TextureId id) const { return textures[id].width; }

int RaylibEngine::textureHeight(TextureId id) const {
  return textures[id].height;
}

void RaylibEngine::drawTexture(TextureId id, float x, float y) const {
  DrawTexture(textures[id], static_cast<int>(x), static_cast<int>(y), WHITE);
}
