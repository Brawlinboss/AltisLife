#include "..\..\script_macros.hpp"
/*
	File: fn_airhorn.sqf
	Author: Chronic [MIT]

	Description:
	Plays an airhorn sound from the given object
*/
private ["_hornLogic", "_vehicle"];
_vehicle = SEL(_this,0);
_hornLogic = SEL(_this,1);

// hide the object so no one can see it
hideObject _hornLogic;

// turn off damage and simulation on the object playing the siren
_hornLogic allowDamage false;
_hornLogic enableSimulation false;

// play the airhorn!
_hornLogic say3D "HornLT";