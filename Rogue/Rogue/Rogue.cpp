#include "pch.h"
#include <iostream>
#include "Map.h"



int main()
{

	char userInput = 'A';
	int n = 1;
	while (userInput!='e')
	{
		Map map = Map();
		map.PlacePlayer(n,n);
		map.PrintMap();
		std::cin >> userInput;
		n++;
	}
}

