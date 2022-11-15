#include "Area.h"
#include <string>
#include <iostream>


void Area::Go(std::string targetArea, Player& toMove)
{
	for (int i = 0; i < connectedAreas.size(); ++i) 
	{
		if (connectedAreas[i]->name == targetArea) 
		{
		
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
