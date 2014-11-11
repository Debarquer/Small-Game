#include "Map.h"


Map::Map()
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 20; y++)
		{
			mMap[i][y] = 'x';
		}
	}
}


Map::~Map()
{
}

void Map::changeMap(int x, int y, char tile)
{
	mMap[x][y] = tile;
}

void Map::outputMap()
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 20; y++)
		{
			std::cout << mMap[i][y];
		}
		std::cout << std::endl;
	}
}