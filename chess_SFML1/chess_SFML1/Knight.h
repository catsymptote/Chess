#pragma once
#include "Chesspiece.h"


class Knight :
	public Chesspiece
{
public:
	Knight(int posX, int posY, Team team, int kills = 0);
	~Knight();
};
