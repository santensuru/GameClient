// tugas06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileStream.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>


//int _tmain(int argc, _TCHAR* argv[])
int main()
{
	//FileStream stream;
	//stream.open("C:\\Users\\user\\Documents\\Visual Studio 2012\\Projects\\tugas06\\Debug\\image.bmp");

	sf::Texture texture;
	//texture.loadFromStream(stream);
	//texture.loadFromFile("C:\\Users\\user\\Documents\\Visual Studio 2012\\Projects\\tugas06\\Debug\\image.bmp");
	if (!texture.loadFromFile("C:\\Users\\user\\Documents\\Visual Studio 2012\\Projects\\tugas06\\Debug\\image.bmp"))
		return -1;


	texture.create(200, 200);

	// update a texture from an array of pixels
	sf::Uint8* pixels = new sf::Uint8[200 * 200 * 4]; // * 4 because pixels have 4 components (RGBA)
	
	texture.update(pixels);

	// update a texture from a sf::Image
	sf::Image image;
	
	texture.update(image);

	// update the texture from the current contents of the window
	sf::RenderWindow window;
	
	texture.update(window);

	texture.setSmooth(true);

	getchar();
	
	return 0;
}

