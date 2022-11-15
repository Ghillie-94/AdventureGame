#pragma once
#include <string>
#include <vector>
#include <iostream>

class Player;

class Area
{
public:

	std::string name;
	std::string areaDescription;
	std::vector<Area*> connectedAreas;

	void Go(std::string targetArea, Player& toMove);
	void Look();


};

