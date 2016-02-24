#include "..\..\script_macros.hpp"
/*
	File: fn_gather.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main functionality for gathering.
*/
if(isNil "life_action_gathering") then {life_action_gathering = false;};
private["_gather","_itemWeight","_diff","_itemName","_resourceZones","_zone"];
_resourceZones = ["apple_1","apple_2","apple_3","apple_4","peaches_1","peaches_2","peaches_3","peaches_4","heroin_1","cocaine_1","weed_1","sugar_1","sugar_2","corn_1","corn_2","grape_1","grape_2"];
_zone = "";

if(life_action_inUse) exitWith {}; //Action is in use, exit to prevent spamming.
life_action_inUse = true;
//Find out what zone we're near
{
	if(player distance (getMarkerPos _x) < 60) exitWith {_zone = _x;};
} foreach _resourceZones;

if(EQUAL(_zone,"")) exitWith {life_action_inUse = false;};

//Get the resource that will be gathered from the zone name...
switch(true) do
{
	case (_zone in ["apple_1","apple_2","apple_3","apple_4"]): {_gather = ["apple",3];};
	case (_zone in ["peaches_1","peaches_2","peaches_3","peaches_4"]): {_gather = ["peach",3];};
	case (_zone in ["heroin_1"]): {_gather = ["heroin_unprocessed",1];};
	case (_zone in ["cocaine_1"]): {_gather = ["cocaine_unprocessed",1];};
	case (_zone in ["weed_1"]): {_gather = ["cannabis",1];};
	case (_zone in ["sugar_1","sugar_2"]): {_gather = ["sugar",1];};
	case (_zone in ["corn_1","corn_2"]): {_gather = ["corn",1];};
	case (_zone in ["grape_1","grape_2"]): {_gather = ["grape",1];};
	default {""};
};

//gather check??
if(vehicle player != player) exitWith {};

_diff = [SEL(_gather,0),SEL(_gather,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
_originalPos = getPos player;

_itemName = M_CONFIG(getText,"VirtualItems",SEL(_gather,0),"displayName");
titleText[format["You have started gathering %1",(localize _itemName)],"PLAIN"];

while {life_carryWeight < life_maxWeight} do
{
	if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};
	life_action_gathering = true;
	if(player distance _originalPos > 2) exitWith { life_action_gathering = false; titleText["Stop moving! Gathering Stopped.","PLAIN"]; };
	sleep 3;
	([true,SEL(_gather,0),_diff] call life_fnc_handleInv);
	titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
	titleFadeOut 1;
	if(((life_carryWeight) + _diff) >= (life_maxWeight)) exitWith {life_action_gathering = false; titleText["Your inventory is full!", "PLAIN"];};
	if(player distance _originalPos > 2) exitWith { life_action_gathering = false; titleText["Stop moving! Gathering Stopped.","PLAIN"]; };
};

life_action_gathering = false;