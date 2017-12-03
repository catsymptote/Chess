#pragma once
#include "Chesspiece.h"


class Queen :
	public Chesspiece
{
public:
	Queen(int posX, int posY, Team team, int kills = 0);
	~Queen();
};
