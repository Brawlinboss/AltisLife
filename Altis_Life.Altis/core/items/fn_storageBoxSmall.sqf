#include "..\..\script_macros.hpp"
/*
	Author: NiiRoZz

	Description:
	Tries to place a storage box in position selected.
*/
private["_boxType","_container"];
life_container_active = true;
closeDialog 0;
_object = "Box_IND_Grenades_F" createVehicle (position player);
life_container_activeObj = _object;
_attachPos = [0, 3, 0.5];
_object attachTo[player, _attachPos];
_object enableSimulationGlobal false;