#pragma once
#include <vector>


class Map
{
public:

	Map();
	void PrintMap();

private:
	char ground = char(' ');
	char borderHorizontalTop = char(223);
	char borderHorizontalDown = char(220);
	char borderVertical = char(219);
	int map_height = 20;
	int map_width = 20;
	std::vector<std::vector<char>> map;
};
