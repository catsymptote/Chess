#pragma once

#include "CPiece.h"

class CCell
{
public:
	CCell();
	~CCell();

private:
	bool	empty;
	CPiece	piece;
};

