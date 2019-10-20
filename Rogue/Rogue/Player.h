#pragma once
class Player
{
public:
	Player();
	void PlayerAction();
	void MovePlayer(int obstacle);
	void PrintPlayerInfo();
	void PlayerTakeDamage(int damage);
	void PlayerHealed(int heal);
	bool IsPlayerAlive();
	int posX;
	int posY;
	int newPosX;
	int newPosY;
	int oldPosX;
	int oldPosY;
	int playerPots = 0;
private:
	int playerHealth;
	char UserInput;
};

