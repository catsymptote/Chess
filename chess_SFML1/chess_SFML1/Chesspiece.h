#pragma once
#include <SFML/Graphics.hpp>
//#include "Chessboard.h"


class Chesspiece
{
public:
	enum Team {
		white = 0,
		black = 1
	};
	Chesspiece(int posX, int posY, Team team, int kills = 0);
	~Chesspiece();

	int*	getPosition();
	int		getKills();
	Team	getTeam();

	bool	move(int x, int y);
	bool	moveIsLegal() { return false; };
	//void	removePiece();

	void	draw(sf::RenderWindow& window, int x, int y);
	void	update();

protected:
	void	incrementKill();

protected:
	int *position;
	int kills;
	Team team;
	sf::Texture pieceTexture;
	sf::RectangleShape body;
	sf::IntRect uvRect;
	//static int pieceCount;
};
