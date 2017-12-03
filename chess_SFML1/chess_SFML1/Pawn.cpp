#include "Pawn.h"



Pawn::Pawn(int posX, int posY, Team team, int kills)
	: Chesspiece(posX, posY, team, kills)
{
	uvRect.top = uvRect.height * team;
	uvRect.left = uvRect.width * 5;
}


Pawn::~Pawn()
{
}
