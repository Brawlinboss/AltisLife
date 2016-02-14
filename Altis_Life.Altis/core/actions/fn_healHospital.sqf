#include "..\..\script_macros.hpp"
/*
	File: fn_healHospital.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Doesn't matter, will be revised later.
*/
private ["_healFee"];
_healFee = LIFE_SETTINGS(getNumber,"heal_fee");
if(CASH < _healFee && BANK < _healFee) exitWith {hint format[localize "STR_NOTF_HS_NoCash",_healFee];};
titleText[localize "STR_NOTF_HS_Healing","PLAIN"];

uiSleep 8;

if(player distance (_this select 0) > 4) exitWith {titleText[localize "STR_NOTF_HS_ToFar","PLAIN"]};
[_healFee,0] call life_fnc_debitCard;
titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
player setDamage 0;