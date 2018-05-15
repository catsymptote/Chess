#pragma once

#include "CBoard.h"
#include "CMove.h"
#include "chessEnums.h"

#include <vector>


class CGame
{
public:
	CGame();
	~CGame();

private:
	CBoard board;
	int score;
	float time[2];
	std::vector<CMove> moves;
	gameState gState;

};
