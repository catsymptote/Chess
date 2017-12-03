#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include "King.h"



class Chessboard
{
public:
	Chessboard(float viewSize, int sizeX = 8, int sizeY = 8);
	~Chessboard();

	void	update();
	void	draw(sf::RenderWindow& window);

	//void	newBoard();
	//void	startGame();
	//void	movePiece(int x1, int y1, int x2, int y2);

private:
	Chesspiece* pieces[8][8];
	int boardSize[2];
	sf::Texture boardTexture;
	sf::RectangleShape body;
	sf::IntRect uvRect;
};
