/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#include "MainMenu.h"

#include "..\macros.h"

#include "..\Menu\Menu.h"
#include "..\Menu\Routine.h"

#include "..\Natives\natives2.h"

namespace sub
{
	void MainMenu()
	{
		AddTitle("Krypton");

		//SubMenus 
		AddOption("Player", null, nullFunc, SUB::PLAYEROPS);
		AddOption("Network", null, nullFunc, SUB::PLAYERSSUB);
		AddOption("Vehicle", null, nullFunc, SUB::VEHICLEOPS);
		AddOption("Teleport", null, nullFunc, SUB::TELEPORTOPS);
		AddOption("Weapon", null, nullFunc, SUB::WEAPONOPS);
		AddOption("Weather", null, nullFunc, SUB::WEATHEROPS);
		AddOption("Time", null, nullFunc, SUB::TIMEOPS);
		AddOption("Object", null, nullFunc, SUB::SPOONER_MAIN);
		AddOption("Misc", null, nullFunc, SUB::MISCOPS);
		AddOption("Settings", null, nullFunc, SUB::SETTINGS);
		
//No Idea What This Is Yet 
		
		Static_240 = PLAYER_ID();
		Static_241 = PLAYER_PED_ID();
		Static_239 = GET_PLAYER_NAME(Static_240);
		Static_242 = GET_PLAYER_GROUP(Static_240);

	}

}




