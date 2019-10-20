#pragma once
#include <vector>


class Map
{
public:

	Map();
	int CheckTile(int posX, int posY);
	void PlacePlayer(int posX, int posY, int newPosX, int newPosY);
	void PrintMap();
	void PlacePotions(int posX, int posY, bool taken);
	void PlaceTraps(int posX, int posY);
	static const int map_height = 20;
	static const int map_width = 20;
private:
	char ground = char(' ');
	char borderHorizontalTop = char(223);
	char borderHorizontalDown = char(220);
	char borderVertical = char(219);
	char potionChar = char('O');
	char trapChar = char('H');
	char playerChar = char('@');
	std::vector<std::vector<char>> map;
};
