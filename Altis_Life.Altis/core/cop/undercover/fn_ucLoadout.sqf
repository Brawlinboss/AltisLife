#include "..\..\..\script_macros.hpp"
/*
	File: fn_swatLoadout.sqf
	Author: Jesse Schultz

	Based of Tonics crap.

	Description:
	Loads the undercover out with the default gear and doesn't save the gear...
*/

RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;

{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);

if(hmd player != "") then {	player unlinkItem (hmd player); };

// Undercover Loadout
if(life_is_undercover) then
{
	player addUniform "";
	player addVest "";
	player addHeadgear "";
};

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[] call life_fnc_playerSkins;