#pragma once
#include "Chesspiece.h"
#include "Chessboard.h"


class Game
{
public:
	Game(float viewSize, int sizeX = 8, int sizeY = 8);
	~Game();

	void	movePiece(int x1, int y1, int x2, int y2);
	void	update();
	void	draw(sf::RenderWindow& window);

private:
	void	newBoard();
	void	startGame();

private:
	int boardSize[2];
	Chesspiece* pieces[8][8];
	Chessboard* board;
};
