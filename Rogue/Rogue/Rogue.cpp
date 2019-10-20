#include "pch.h"
#include <iostream>
#include "Map.h"
#include "Player.h"


int main()
{
	Map map = Map();
	Player player = Player();
	map.PlacePlayer(player.posX, player.posY, player.newPosX, player.newPosY);
	while (true)
	{
		
		map.PrintMap();
		player.PrintPlayerInfo();
		player.PlayerAction();
		std::cout << "New pos x y = " << player.newPosX << " " << player.newPosY << std::endl; 
		int obstacle = map.CheckTile(player.newPosX, player.newPosY);
		std::cout << "Obstacle = " << obstacle << std::endl;
		player.MovePlayer(obstacle);
		map.PlacePlayer(player.oldPosX,player.oldPosY,player.newPosX,player.newPosY);
		
		
	}
}

