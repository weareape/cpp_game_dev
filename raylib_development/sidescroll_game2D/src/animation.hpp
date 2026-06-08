#pragma once

#include "raylib.h"
#include "config.h"

struct Animation{
    Rectangle frame;
    int frameCount;
    int currentFrame;
    float timer;

    Animation(Rectangle firstFrame, int count);
    void update(float deltaTime);
    Rectangle GetCurrentFrame() const;
}