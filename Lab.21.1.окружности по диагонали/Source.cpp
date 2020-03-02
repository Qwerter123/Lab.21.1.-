#include "Header.h"


int main(int argc, char* argv[])

{
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	SDL_Texture* texture = nullptr;
	//SDL_Texture* LoadImage(string file);
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "Error " << endl;
		cout << SDL_GetError() << endl;
	}
	else
	{
		int scrh, scrw;
		do
		{
			cout << "Enter screen height " << endl;
			cin >> scrh;
			cout << "Now enter screen width " << endl;
			cin >> scrw;
		} while (scrh < 0 || scrw < 0);

		window = SDL_CreateWindow("Урок1", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, scrw, scrh, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			cout << "Окно не может быть создано! SDL_Error: %s\n" << SDL_GetError() << endl;
		}
		else
		{
			SDL_Texture* texture = nullptr;;
			texture = LoadImage(renderer, texture);
			for (int i = 0; i < 2000; i++)
			{
				double u = 3.14 / 180 * i;
				PrintTexture(100 * cos(u), 100.0 * sin(u), texture, renderer);
				//SDL_RenderCopy(renderer, texture, NULL, NULL);
				
				SDL_Delay(5);
				cout << i << endl;
			}
		}
	}
	quit(window, renderer);
	

	

	return 0;

}
