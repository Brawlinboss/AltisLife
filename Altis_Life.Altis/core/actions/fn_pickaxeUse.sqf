#include "..\..\script_macros.hpp"
/*
	File: fn_pickaxeUse.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main functionality for pickaxe in mining.
*/
closeDialog 0;
private["_mine","_itemWeight","_diff","_itemName","_originalPos"];
_mine = [];

switch (true) do
{
	case (player distance (getMarkerPos "salt_1") < 120) : {_mine = ["salt_unrefined",1];};
	case (player distance (getMarkerPos "salt_2") < 120) : {_mine = ["salt_unrefined",1];};
	case (player distance (getMarkerPos "diamond_1") < 50): {_mine = ["diamond_uncut",1];};
	case (player distance (getMarkerPos "diamond_2") < 50): {_mine = ["diamond_uncut",1];};
	case (player distance (getMarkerPos "oil_1") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "oil_2") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "rock_1") < 50): {_mine = ["rock",2];};
	case (player distance (getMarkerPos "rock_2") < 50): {_mine = ["rock",2];};
	case (player distance (getMarkerPos "rock_3") < 50): {_mine = ["rock",2];};
	case (player distance (getMarkerPos "rock_4") < 50): {_mine = ["rock",2];};
default {["", 0]};
};

//Mine check
if(EQUAL(SEL(_mine, 0),"")) exitWith {hint localize "STR_ISTR_Pick_NotNear"};
if(vehicle player != player) exitWith {hint localize "STR_ISTR_Pick_MineVeh";};
if(life_action_inUse) exitWith {}; // prevent spamming

_diff = [SEL(_mine,0),SEL(_mine,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};
_originalPos = getPos player;

_itemName = M_CONFIG(getText,"VirtualItems",SEL(_mine,0),"displayName");
titleText[format["You have started mining %1",(localize _itemName)],"PLAIN"];

while {life_carryWeight < life_maxWeight} do
{
	if(player distance _originalPos > 1) exitWith { life_action_inUse = false; titleText["Stop moving! Collecting stopped.","PLAIN"]; };
	life_action_inUse = true;
	sleep 2.5;
	if([true,SEL(_mine,0),_diff] call life_fnc_handleInv);
	titleText[format [localize "STR_ISTR_Pick_Success",(localize _itemName),_diff,(life_carryWeight),(life_maxWeight)], "PLAIN"];
	if(((life_carryWeight) + _diff) >= (life_maxWeight)) exitWith {life_action_inUse = false; titleText["Your inventory is full", "PLAIN"];};
};

life_action_inUse = false;