#pragma once

class GameEngine {
public:
  virtual ~GameEngine() = default;

  using TextureId = int;

  // Lifecycle
  virtual void init() const = 0;
  virtual void beginDrawing() const = 0;
  virtual void endDrawing() const = 0;
  virtual bool shouldClose() const = 0;
  virtual void close() const = 0;

  // Platform primitives — the game builds its own logic on top of these
  virtual float deltaTime() const = 0;
  virtual int screenWidth() const = 0;
  virtual int screenHeight() const = 0;
  virtual TextureId loadTexture(const char *path) = 0;
  virtual int textureWidth(TextureId id) const = 0;
  virtual int textureHeight(TextureId id) const = 0;
  virtual void drawTexture(TextureId id, float x, float y) const = 0;
};
