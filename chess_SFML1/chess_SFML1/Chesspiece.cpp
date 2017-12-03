#include "Chesspiece.h"


int *position = new int[2];


Chesspiece::Chesspiece(int posX, int posY, Team team, int kills)
{
	this->kills = kills;

	/// Saying 'position[0] = posX;' is bad because const, access violation, stuffs and things blablabla..
	int pos[] = {posX, posY};
	position = pos;

	//sf::Texture boardTexture;
	pieceTexture.loadFromFile("texture/chesspieces.png");

	body.setSize(sf::Vector2f(128, 128));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(128 / 2, 128 / 2);
	body.setTexture(&pieceTexture);
	//sf::IntRect uvRect;
	uvRect.width = pieceTexture.getSize().x / 6;
	uvRect.height = pieceTexture.getSize().y / 2;
}


Chesspiece::~Chesspiece()
{
	delete position;
}


/// Get methods
int * Chesspiece::getPosition()
{
	return position;
}

int Chesspiece::getKills()
{
	return kills;
}

Chesspiece::Team Chesspiece::getTeam()
{
	return team;
}

bool Chesspiece::move(int x, int y)
{
	if(!moveIsLegal())
		return false;
	/// Move piece and texture.
	return true;
}

void Chesspiece::incrementKill()
{
	kills++;
}

void Chesspiece::draw(sf::RenderWindow& window, int x, int y)
{
	float xx = 128 / 2 + 128 * x;
	float yy = 128 / 2 + 128 * y;
	body.setPosition(xx, yy);
	window.draw(body);
}

void Chesspiece::update()
{
	body.setTextureRect(uvRect);
}
