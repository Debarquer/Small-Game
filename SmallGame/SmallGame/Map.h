#pragma once
#include <vector>
#include <iostream>

class Map
{
private:

	char mMap[10][10];
public:
	Map();
	~Map();

	void changeMap(int x, int y, char tile);
	void outputMap();
};

