#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(str(player) in ["swat_1","swat_2","swat_3","swat_4","swat_5"]) then
{
	if(!(life_is_swat)) exitWith
	{
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 30;
	};
};

if(str(player) in ["undercover_1","undercover_2","undercover_3"]) then
{
	["NotSetup",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then
{
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(str(player) in ["swat_1"]) then { life_swat_commander = true; };
if(str(player) in ["swat_2"]) then { life_swat_recon = true; };
if(str(player) in ["swat_3","swat_4","swat_5"]) then { life_swat_assault = true; };
if(str(player) in ["undercover_1","undercover_2","undercover_3"]) then { life_is_undercover = true; };

if(life_swat_assault OR life_swat_recon OR life_swat_commander) then {[] call life_fnc_swatLoadout;};

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] call life_fnc_playerSkins;
[] spawn life_fnc_placeablesInit;