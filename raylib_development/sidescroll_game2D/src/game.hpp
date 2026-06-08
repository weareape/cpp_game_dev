#pragma once

#include "raylib.h"
#include <vector>

struct Game{
    Texture2D characterSheet;
    Texture2D environmentSheet;

    Player player;
    std::vector<Rectangle> platforms;
    // std::vector<Collectible> coins;
    // std::vector<Door> doors;
    // std::vector<Enemy> enemies;

    Camera2D camera;
    int score;
    int keys;
    GameState state;

    Game();

    void CreateLevel();
    void Update(float deltaTime);
    void Draw();
    void HandleInput();
    ~Game();
    bool ShouldClose() const;
};