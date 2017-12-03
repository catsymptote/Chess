#pragma once
#include "Chesspiece.h"


class Bishop :
	public Chesspiece
{
public:
	Bishop(int posX, int posY, Team team, int kills = 0);
	~Bishop();
};
