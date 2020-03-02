#include "Header.h"

SDL_Texture* LoadImage(SDL_Renderer* renderer, SDL_Texture *texture)
{
	SDL_Surface* loadedimage = nullptr;
	loadedimage = SDL_LoadBMP ("1.bmp");
	if (loadedimage != nullptr)
	{
		texture = SDL_CreateTextureFromSurface(renderer, loadedimage);
		SDL_FreeSurface(loadedimage);
	}
	else
	{
		cout << SDL_GetError() << endl;
		return texture;
	}
	return texture;
}
void PrintTexture(int x, int y, SDL_Texture* texture, SDL_Renderer* renderer)
{
	SDL_Rect posit;
	posit.x = x;
	posit.y = y;
	SDL_QueryTexture(texture, NULL, NULL, &posit.x, &posit.y);//рисуем в масштабе 1:1
	SDL_RenderCopy(renderer, texture, NULL, &posit);//отправляем текстуру в рендер
	SDL_RenderPresent(renderer);
}
void quit(SDL_Window* window, SDL_Renderer *renderer)
{
	SDL_DestroyWindow(window);
	window = NULL;
	SDL_DestroyRenderer(renderer);
	renderer = NULL;
	SDL_Quit();
}