#pragma once
#include "SDL.h"
#include <iostream>
#include <math.h>
using namespace std;


void quit(SDL_Window* window, SDL_Renderer* renderer);
void PrintTexture(int x, int y, SDL_Texture* texture, SDL_Renderer* renderer);
SDL_Texture* LoadImage(SDL_Renderer* renderer, SDL_Texture* texture);