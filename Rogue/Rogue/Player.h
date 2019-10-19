#pragma once
class Player
{
public:
	Player();
	void PlayerAction();
	void MovePlayer(int obstacle);
	void PrintPlayerInfo();
	int posX;
	int posY;
	int newPosX;
	int newPosY;

private:
	char UserInput;

};

