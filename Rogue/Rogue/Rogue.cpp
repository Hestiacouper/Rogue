#include "pch.h"
#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Potion.h"
#include "Traps.h"

int main()
{
	Map map = Map();
	Player player = Player();
	map.PlacePlayer(player.posX, player.posY, player.newPosX, player.newPosY);
	Potion potion1 = Potion();
	Potion potion2 = Potion();
	Traps trap1 = Traps();
	Traps trap2 = Traps();
	map.PlacePotions(potion1.posX, potion1.posY, potion1.taken);
	map.PlacePotions(potion2.posX, potion2.posY, potion2.taken);
	map.PlaceTraps(trap1.posX, trap1.posY);
	map.PlaceTraps(trap2.posX, trap2.posY);
	while (player.IsPlayerAlive())
	{
		map.PrintMap();
		player.PrintPlayerInfo();
		player.PlayerAction();
		int obstacle = map.CheckTile(player.newPosX, player.newPosY);
		player.MovePlayer(obstacle);
		//map.PlacePotions(potion1.posX, potion1.posY, potion1.taken);
		//map.PlacePotions(potion2.posX, potion2.posY, potion2.taken);
		map.PlacePlayer(player.oldPosX,player.oldPosY,player.newPosX,player.newPosY);
	}
	std::cout << "Haha you lost noob";
}

