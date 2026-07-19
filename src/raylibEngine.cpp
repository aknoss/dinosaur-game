#include "raylibEngine.h"
#include "raylib.h"

void RaylibEngine::init() const {
  InitWindow(screenWidth, screenHeight, gameName);
}

void RaylibEngine::draw(char message[]) const {
  BeginDrawing();
  ClearBackground(RAYWHITE);
  DrawText(message, 190, 200, 20, LIGHTGRAY);
  EndDrawing();
}

bool RaylibEngine::shouldClose() const { return WindowShouldClose(); }

void RaylibEngine::close() const { CloseWindow(); }
