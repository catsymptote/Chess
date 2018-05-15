#pragma once

#include "chessEnums.h"

class CMove
{
public:
	CMove();
	~CMove();

private:
	int			startPosition[2];
	int			endPosition[2];
	pieceType	piece;
};
