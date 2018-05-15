#include "Game.h"
#include "ChessBoard.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"



//Chessboard board(1024.0f);

Game::Game(float viewSize, int sizeX, int sizeY)
{
	boardSize[0] = sizeX;
	boardSize[1] = sizeY;
	board = new Chessboard(viewSize, sizeX, sizeY);

	newBoard();
	startGame();
}

Game::~Game()
{
}


void Game::movePiece(int x1, int y1, int x2, int y2)
{
	// Move piece at x1,y1 to x2,y2
	// pieces[x1][x2]->move(x2, y2);
	if (!pieces[x1][y1]->move(x2, y2))
		printf("Illegal move or something.");
}


void Game::update()
{
	//board->update();
	

	for (int x = 0; x < boardSize[0]; x++)
	{
		for (int y = 0; y < boardSize[1]; y++)
		{
			if (pieces[x][y] != nullptr)
				pieces[x][y]->update();
		}
	}
}

void Game::draw(sf::RenderWindow & window)
{
	/// Draw board
	board->draw(window);

	/// Draw pieces
	for (int x = 0; x < boardSize[0]; x++)
	{
		for (int y = 0; y < boardSize[1]; y++)
		{
			if (pieces[x][y] != nullptr)
				pieces[x][y]->draw(window, x, y);
		}
	}
}


void Game::newBoard()
{
	for (int x = 0; x < boardSize[0]; x++)
	{
		for (int y = 0; y < boardSize[1]; y++)
		{
			/// If object exists on heap: delete? Include destruction of already existing objects here?
			pieces[x][y] = nullptr;
		}
	}
}


void Game::startGame()
{
	Chesspiece::Team w = Chesspiece::white;
	Chesspiece::Team b = Chesspiece::black;

	/// Pawns
	for (int x = 0; x < 8; x++)
	{
		pieces[x][6] = new Pawn(x, 1, w);
		pieces[x][1] = new Pawn(x, 6, b);
	}

	/// White pieces.
	pieces[0][7] = new Rook(0, 7, w);
	pieces[1][7] = new Knight(1, 7, w);
	pieces[2][7] = new Bishop(2, 7, w);
	pieces[3][7] = new Queen(3, 7, w);
	pieces[4][7] = new King(4, 7, w);
	pieces[5][7] = new Bishop(5, 7, w);
	pieces[6][7] = new Knight(6, 7, w);
	pieces[7][7] = new Rook(7, 7, w);

	/// Black pieces.
	pieces[0][0] = new Rook(0, 0, b);
	pieces[1][0] = new Knight(1, 0, b);
	pieces[2][0] = new Bishop(2, 0, b);
	pieces[3][0] = new Queen(3, 0, b);
	pieces[4][0] = new King(4, 0, b);
	pieces[5][0] = new Bishop(5, 0, b);
	pieces[6][0] = new Knight(6, 0, b);
	pieces[7][0] = new Rook(7, 0, b);
}
