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
		std::cout << "Player entered D\n";
		newPosY = posY + 1;
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
	switch (obstacle)//if(obstacle==1)
	{

		case 1:
		{
			std::cout << "Debug posX " << posX << "Debug newPosX " << newPosX << "\n";
			std::cout << "Debug posX " << posY << "Debug newPosX " << newPosY << "\n";
			posX = newPosX;
			posY = newPosY;
			break;
		}
		//else if (obstacle == 2)
		case 2:
		{
			std::cout << "You can't moove in a wall!\n";
			newPosX = posX;
			newPosY = posY;
			break;
		}
		//else if (obstacle == 3)
		case 3:
		{
			std::cout << "Debug pot\n";
			posX = newPosX;
			posY = newPosY;
			break;
			//Gotta add heal later
		}
		case 4:
			//else if(obstacle==4)
		{
			std::cout << "Debug trap\n";
			posX = newPosX;
			posY = newPosY;
			break;
			//Gotta add take damage later
		}
		default:
		{
			std::cout << "WHY?";
		}
	}
}

void Player::PrintPlayerInfo()
{
	std::cout << "Player Pos X= " << newPosX << " Pos Y= " << newPosY << "\n";

}




