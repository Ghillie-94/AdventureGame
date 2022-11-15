#pragma once
#include <string>
#include <vector>
#include <iostream>

class Area
{
public:

	std::string name;
	std::string areaDescription;
	std::vector<Area*> connectedAreas;

	void Go(std::string targetArea);
	void Look();


};

