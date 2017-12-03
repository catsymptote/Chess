#include <SFML/Graphics.hpp>
#include "Game.h"


static const float VIEW_HEIGHT = 512.0f;

void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);
}


int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 1024), "Chess board");
	sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));
	
	Game game(1024.0f);
	//sf::Texture boardTexture;
	//boardTexture.loadFromFile("texture/chessboard.png");

	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				ResizeView(window, view);
				break;
			}
		}
		game.update();
		window.clear();
		game.draw(window);

		
		//window.draw(boardTexture);
		//board.draw(window);
		window.display();
	}
	
	return 0;
}
