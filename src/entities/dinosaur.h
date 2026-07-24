#pragma once
#include "entity.h"

class Dinosaur : public Entity {
public:
  Dinosaur(GameEngine &engine, float floorY);
  void update(float dt) override;
  void draw(GameEngine &engine) override = 0;
  GameEngine::Rect bounds() const override = 0;
};
