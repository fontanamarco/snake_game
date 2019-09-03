#include "renderer.h"
#include <iostream>
#include <string>
#include <random>
#include <chrono>

Renderer::Renderer(const std::size_t screen_width,
                   const std::size_t screen_height,
                   const std::size_t grid_width, const std::size_t grid_height)
    : screen_width(screen_width),
      screen_height(screen_height),
      grid_width(grid_width),
      grid_height(grid_height) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create Window
  sdl_window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

  if (nullptr == sdl_window) {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdl_renderer) {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // init sdl_image library
  if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
      std::cerr << "IMG_Init failed" << "\n";
      std::cerr << "SDL_Image_error: " << IMG_GetError() << "\n";
  }

  // load textures
  LoadBackground();
  LoadFood();
  LoadSnake();
}

Renderer::~Renderer() {

  SDL_DestroyTexture(textureFood);
  SDL_DestroyTexture(textureBody);

  for (auto &item : texture_bckground) {
        SDL_DestroyTexture(item.second);
  }

  for (auto &item : texture_snake) {
      SDL_DestroyTexture(item.second);
  }

  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
  IMG_Quit();
}

void Renderer::Render(Snake const snake, SDL_Point const &food) {
  SDL_Rect block;
  SDL_Rect bckgnd;

  block.w = screen_width / grid_width;
  block.h = screen_height / grid_height;
  block.x = 0;
  block.y = 0;

  // Clear screen
  SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
  SDL_RenderClear(sdl_renderer);

  // render background
  int bckgnd_h = grid_width / 4;
  int bckgnd_v = grid_height / 4;
  int texture = 0;

  bckgnd.w = screen_width / bckgnd_h;
  bckgnd.h = screen_height / bckgnd_v;
  bckgnd.x = bckgnd.y = 0;
  for (int i = 0; i < bckgnd_v; i++) {
      for (int j = 0; j < bckgnd_h; j++) {
          bckgnd.x = j * bckgnd.w;
          bckgnd.y = i * bckgnd.h;
          SDL_RenderCopy(sdl_renderer, texture_bckground[texture], nullptr, &bckgnd);
      }
      texture >= 10 ? 0 : texture++;
  }

  // Render food
  block.x = food.x * block.w;
  block.y = food.y * block.h;
  SDL_RenderCopy(sdl_renderer, textureFood, nullptr, &block);

  // Render snake's body
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  for (SDL_Point const &point : snake.body) {
    block.x = point.x * block.w;
    block.y = point.y * block.h;
    SDL_RenderCopy(sdl_renderer, textureBody, nullptr, &block);
  }

  // Render snake's head
  block.x = static_cast<int>(snake.head_x) * block.w;
  block.y = static_cast<int>(snake.head_y) * block.h;
  if (snake.alive) {
    SDL_SetRenderDrawColor(sdl_renderer, 0x00, 0x7A, 0xCC, 0xFF);
  } else {
    SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0x00, 0x00, 0xFF);
  }
  SDL_RenderCopy(sdl_renderer, texture_snake[snake.direction], nullptr, &block);

  // Update Screen
  SDL_RenderPresent(sdl_renderer);
}

void Renderer::UpdateWindowTitle(int score, int fps) {
  std::string title{"Snake Score: " + std::to_string(score) + " FPS: " + std::to_string(fps)};
  SDL_SetWindowTitle(sdl_window, title.c_str());
}


int Renderer::LoadBackground()
{
    unsigned seed1, n;

    seed1 = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 g1(seed1);

    for (uint8_t i = 0; i < 10; i++) {
        n = g1() % 10;
        std::string img = imgBackground + std::to_string(n) + ".png";
        texture_bckground[i] = CreateTextureFromFile(img.c_str());
    }

    return 0;
}

int Renderer::LoadFood()
{
    textureFood = CreateTextureFromFile("../img/fruit.png");

    return 0;
}

int Renderer::LoadSnake()
{
    texture_snake[Snake::kUp] = CreateTextureFromFile(imgSnakeHead_up);
    texture_snake[Snake::kDown] = CreateTextureFromFile(imgSnakeHead_down);
    texture_snake[Snake::kLeft] = CreateTextureFromFile(imgSnakeHead_left);
    texture_snake[Snake::kRight] = CreateTextureFromFile(imgSnakeHead_right);
    // body
    textureBody = CreateTextureFromFile(imgSnakeBody);
}

SDL_Texture *Renderer::CreateTextureFromFile(const char *imgPath)
{
    SDL_Surface *surface = nullptr;
    SDL_RWops *rwops;

    // load image from file
    if ((rwops = SDL_RWFromFile(imgPath, "rb")) == nullptr) {
        std::cerr << "Loading image " << imgPath << " failed." << "\n";
        std::cerr << SDL_GetError() << "\n";
        return nullptr;
    }

    if ((surface = IMG_LoadPNG_RW(rwops)) == nullptr) {
        std::cerr << "Loading image " << imgPath << " failed." << "\n";
        std::cerr << SDL_GetError() << "\n";
        return nullptr;
    }

    // convert the surface to a texture
    SDL_Texture *texture = nullptr;
    if (( texture = SDL_CreateTextureFromSurface(sdl_renderer, surface)) == nullptr) {
        std::cerr << "CreateTexture of image " << imgPath << " failed." << "\n";
        std::cerr << SDL_GetError() << "\n";
        return nullptr;
    }

    return texture;
}