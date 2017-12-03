#pragma once
#include "Chesspiece.h"


class Rook :
	public Chesspiece
{
public:
	Rook(int posX, int posY, Team team, int kills = 0);
	~Rook();
};
