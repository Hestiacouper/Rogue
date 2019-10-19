#include "pch.h"
#include "Player.h"
#include <iostream>

Player::Player()
{
	posX = 1;
	posY = 1;
	newPosX = posX;
	newPosY = posY;
}

void Player::PlayerAction()
{
	std::cin >> UserInput;
	if(UserInput=='d')
	{
		newPosY = posY + +1;
	}
	else if(UserInput=='a')
	{
		newPosY = posY - 1;
	}
	else if (UserInput == 's')
	{
		newPosX = posX + 1;
	}
	else if (UserInput == 'w')
	{
		newPosX = posX - 1;
	}
}

void Player::MovePlayer(int obstacle)
{
	if(obstacle==1)
	{
		posX = newPosX;
		posY = newPosY;
	}
	else if (obstacle == 3)
	{
		posX = newPosX;
		posY = newPosY;
		//Gotta add heal later
	}
	else if(obstacle==4)
	{
		posX = newPosX;
		posY = newPosY;
		//Gotta add take damage later
	}
	else
	{
		std::cout << "You can't moove in a wall!\n";
		newPosX = posX;
		newPosY = posY;
	}

	
}

void Player::PrintPlayerInfo()
{
	std::cout << "Player Pos X= " << newPosX << " Pos Y= " << newPosY << "\n";

}




