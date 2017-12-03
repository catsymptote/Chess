#pragma once
#include "Chesspiece.h"


class King :
	public Chesspiece
{
public:
	King(int posX, int posY, Team team, int kills = 0);
	~King();
};
