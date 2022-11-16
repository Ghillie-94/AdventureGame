#include "Area.h"
#include <string>
#include <iostream>
#include "Player.h"


void Area::Go(std::string targetArea, Player& toMove)
{
	for (int i = 0; i < connectedAreas.size(); ++i) 
	{
		if (connectedAreas[i]->name == targetArea) 
		{
			toMove.currentArea = connectedAreas[i];
		}
	}
}

void Area::Look()
{
	std::cout << "You are in " << name << ". " << areaDescription << std::endl
		<< " The adjoining areas are: ";
	for (int i = 0; i < connectedAreas.size(); ++i) 
	{
		std::cout << connectedAreas[i]->name << " ";
	}
}
