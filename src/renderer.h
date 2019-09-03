#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <map>
#include "SDL.h"
#include <SDL_image.h>
//#include <bits/unordered_map.h>
#include "snake.h"


//typedef enum {
//    SNAKE_HEAD_UP,
//    SNAKE_HEAD_DOWN,
//    SNAKE_HEAD_LEFT,
//    SNAKE_HEAD_RIGHT
//} SNAKE_TEXTURE;

class Renderer {
public:
    Renderer(const std::size_t screen_width, const std::size_t screen_height,
             const std::size_t grid_width, const std::size_t grid_height);

    ~Renderer();

    void Render(Snake const snake, SDL_Point const &food);

    void UpdateWindowTitle(int score, int fps);

private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;

    SDL_Texture *textureBackground;
    SDL_Texture *textureFood;
    SDL_Texture *textureBody;
    std::map<uint8_t , SDL_Texture*> texture_bckground;
    //std::map<SNAKE_TEXTURE, SDL_Texture*> texture_snake;
    std::map<Snake::Direction , SDL_Texture*> texture_snake;

    const std::size_t screen_width;
    const std::size_t screen_height;
    const std::size_t grid_width;
    const std::size_t grid_height;

    const char *imgBackground = "../img/ground";
    const char *imgFood = "../img/food.png";
    const char *imgSnakeHead_up = "../img/head_up.png";
    const char *imgSnakeHead_down = "../img/head_down.png";
    const char *imgSnakeHead_left = "../img/head_left.png";
    const char *imgSnakeHead_right = "../img/head_right.png";

    const char *imgSnakeBody = "../img/body.png";

    SDL_Texture *CreateTextureFromFile(const char *imgPath);

    int LoadBackground();
    int LoadFood();
    int LoadSnake();
};

#endif