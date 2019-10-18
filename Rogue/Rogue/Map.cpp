#include "pch.h"
#include "Map.h"
#include <iostream>
#include <fstream>


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

void Map::PrintMap()
{
	for (unsigned int i = 0; i < map.size(); i++)
	{
		for (unsigned int j = 0; j < map[i].size(); j++)
		{

			std::cout << map[i][j];

		}

		std::cout << "\n";
	}
}

