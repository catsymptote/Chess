#pragma once

#include "CCell.h"
#include "chessEnums.h"

#include <vector>

class CPiece
{
public:
	CPiece();
	~CPiece();

	std::vector<CCell>		getAllowedMoves();
	bool					moveAllowed(CCell startPos, CCell endPos);
	void					move(CCell startPos, CCell endPos);
	void					kill();

private:
	CCell					location;
	pieceTeam				team;
	pieceType				type;
	std::vector<pieceType>	takenPieces;

};
