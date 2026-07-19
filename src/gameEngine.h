#pragma once

class GameEngine {
public:
  virtual ~GameEngine() = default;

  virtual void init() const = 0;
  virtual void beginDrawing() const = 0;
  virtual void endDrawing() const = 0;
  virtual void drawTexture() const = 0;
  virtual bool shouldClose() const = 0;
  virtual void close() const = 0;
};
