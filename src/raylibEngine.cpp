#include "raylibEngine.h"
#include "raylib.h"

void RaylibEngine::init() const {
  InitWindow(screenWidth, screenHeight, gameName);
}

void RaylibEngine::beginDrawing() const {
  BeginDrawing();
  ClearBackground(RAYWHITE);
}

void RaylibEngine::endDrawing() const { EndDrawing(); }

void RaylibEngine::drawTexture() const {}

bool RaylibEngine::shouldClose() const { return WindowShouldClose(); }

void RaylibEngine::close() const { CloseWindow(); }
