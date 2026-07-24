#pragma once

#include "../gameEngine.h"

class Entity {
public:
  virtual ~Entity() = default;
  virtual void update(float dt) = 0;
  virtual void draw(GameEngine &engine) = 0;
  virtual GameEngine::Rect bounds() const = 0;
};
