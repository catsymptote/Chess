#pragma once
#include "Chesspiece.h"


class Pawn :
	public Chesspiece
{
public:
	Pawn(int posX, int posY, Team team, int kills = 0);
	~Pawn();
};
