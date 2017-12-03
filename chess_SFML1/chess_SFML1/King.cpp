#include "King.h"


King::King(int posX, int posY, Team team, int kills)
	: Chesspiece(posX, posY, team, kills)
{
	/// Specifies which graphics to use.
	uvRect.top = uvRect.height * team;
	uvRect.left = 0;
}


King::~King()
{
}
