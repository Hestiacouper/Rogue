#include "pch.h"
#include "Player.h"
#include <iostream>
#include "Potion.h"
#include "Traps.h"

Player::Player()
{
	posX = 1;
	posY = 1;
	newPosX = posX;
	newPosY = posY;
	playerHealth = 10;
}

void Player::PlayerAction()
{
	std::cin >> UserInput;
	if(UserInput=='d')
	{
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
	else if (UserInput == 'f')
	{
		if (playerPots > 0)
		{
			PlayerHealed(Potion::healValue);
			playerPots -= 1;
		}
		else
		{
			std::cout << "You have no potions";
		}
	}
}

void Player::MovePlayer(int obstacle)
{
	switch (obstacle)
	{
		case 1:
		{	
			oldPosX = posX;
			oldPosY = posY;
			posX = newPosX;
			posY = newPosY;
			break;
		}
		case 2:
		{
			oldPosX = posX;
			oldPosY = posY;
			newPosX = posX;
			newPosY = posY;
			break;
		}
		case 3:
		{
			oldPosX = posX;
			oldPosY = posY;
			posX = newPosX;
			posY = newPosY;
			std::cout << "Do you want to pick up the potion? Press e to do so\n";
			std::cin >> UserInput;
			if(UserInput=='e')
			{
				playerPots += 1;
			}
			break;
		}
		case 4:
		{
			oldPosX = posX;
			oldPosY = posY;
			posX = newPosX;
			posY = newPosY;
			PlayerTakeDamage(Traps::damages);
			break;
		}
	}
}

void Player::PrintPlayerInfo()
{
	std::cout << "Player Pos X= " << newPosX << " Pos Y= " << newPosY << "\n";
	std::cout << "Player Health is  " << playerHealth << std::endl;
	std::cout << "Player has " << playerPots << " potions\n";
	std::cout << "Controls are WASD to moove, e to pick up, f to drink potions\n";
}

void Player::PlayerTakeDamage(int damage)
{
	playerHealth -= damage;
}

void Player::PlayerHealed(int heal)
{
	playerHealth += heal;
}

bool Player::IsPlayerAlive()
{
	if(playerHealth<=0)
	{
		return false;
	}
	else
	{
		return true;
	}
}



