#include "..\..\script_macros.hpp"
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	Modifications: Jesse Schultz

	Description:
	Handles damage
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);
_curMag = "";
_curWep = "";

if (!alive _unit) exitWith {};

if (isPlayer _source && _source isKindOf "Man") then
{
	_curMag = currentMagazine _source;
	_curWep = currentWeapon _source;
};

// Rubber bullets
if (((_curMag in ["30Rnd_556x45_Stanag_Tracer_Red","30Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer"])) OR (_curWep in ["hgun_P07_F"]) OR (side _source == west && "acc_pointer_IR" in (primaryWeaponItems _source) && (currentWeapon _source) == "srifle_DMR_03_F")) then
{
	if(!(_part in ["","head","body"])) exitWith {_damage = 0;};
	_partDamage = if(_part == "") then {damage _unit} else { (_unit getHit _part) };
    if((((getDammage _unit) + _damage) >= 0.9) OR (_damage >= 0.95)) then
    {
    	_damage	= 0;
		[_unit,_source] spawn life_fnc_tazed;
	};
};

// No killing in cop restraints
if(player getVariable "restrained") then { _damage = 0; };

// No Death in jail
if (life_is_arrested) then { _damage = 0; };

_damage;