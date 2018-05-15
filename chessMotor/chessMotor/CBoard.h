#pragma once

#include "CCell.h"

#include <deque>
#include <vector>

class CBoard
{
public:
	CBoard();
	~CBoard();

	void	reset();

private:
	int									size[2];
	std::deque<std::deque<CCell> >		board;
	std::vector<CCell>					killed;

};
