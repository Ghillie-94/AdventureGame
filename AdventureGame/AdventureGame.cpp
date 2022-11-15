// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Area.h"

int main()
{
	Player player;

	Area throneRoom;
	
	throneRoom.name = "Throne Room";
	throneRoom.areaDescription = "A vast room that has lots of free space. The decor of the room is extravgant and ornate. The floor is made of shiny white marbel amalgamated with white gold. The throne itself is extravagant with beautiful gems encrusted and precious metal trimming. ";
	
	Area dungeon;

	dungeon.name = "Dungeon";
	dungeon.areaDescription = "A hopeless and desperate place... There is a scent of rotting flesh... ";

	Area armoury;

	armoury.name = "Armoury";
	armoury.areaDescription = "On one side of the room are mannequins with suits of armour. On the other side are a longswords, maces, and daggers. ";

	throneRoom.connectedAreas.push_back(&dungeon);
	dungeon.connectedAreas.push_back(&throneRoom);
	armoury.connectedAreas.push_back(&throneRoom);
	throneRoom.connectedAreas.push_back(&armoury);

	player.currentArea = &throneRoom;
	player.currentArea->Look();
}


