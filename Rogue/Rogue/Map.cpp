#include "pch.h"
#include "Map.h"
#include <iostream>
#include <fstream>
#include "Potion.h"

Map::Map()
{
	std::ifstream map1;
	map1.open("Map1.txt");
	map1 >> std::noskipws;
	map = std::vector<std::vector<char> >(map_width, std::vector<char>(map_height));
	char s;
	for (unsigned int i = 0; i < map.size(); i++)
	{
		for (unsigned int j = 0; j < map[i].size(); j++)
		{

			while (map1 >> s) {
				map[i][j] = s;
				break;
			}

		}
	}
	map1.close();
}

int Map::CheckTile(int posX, int posY)
{
	if(map[posX][posY]==' ')
	{
		return 1;
	} 
	if (map[posX][posY] == borderHorizontalDown || map[posX][posY] == borderHorizontalTop || map[posX][posY] == borderVertical)
	{
		return 2;
	}
	if(map[posX][posY] == potionChar)
	{
		//If code works is used when called in Game.cpp run with player's current pos let player knows a potion is there. If used when looking if can moove, should let player moove.
		return 3;
	}
	if (map[posX][posY] == trapChar)
	{
		//Same but with traps
		return 4;
	}

}

void Map::PlacePlayer(int posX, int posY, int newPosX, int newPosY)
{
	map[posX][posY] = ground;
	map[newPosX][newPosY] = playerChar;
}

void Map::PlacePotions(int posX, int posY, bool taken)
{
	if(!taken)
	{
		map[posX][posY] = potionChar;
	}
	else
	{
		map[posX][posY] = ground;
	}
}
void Map::PlaceTraps(int posX, int posY)
{
	map[posX][posY] = trapChar;
}

void Map::PrintMap()
{
	system("cls");
	for (unsigned int i = 0; i < map.size(); i++)
	{
		for (unsigned int j = 0; j < map[i].size(); j++)
		{

			std::cout << map[i][j];

		}

		std::cout << "\n";
	}
}

