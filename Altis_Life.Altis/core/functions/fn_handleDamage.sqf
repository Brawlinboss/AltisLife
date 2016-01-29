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

systemChat format["_source = %1, _projectile = %2, _curMag = %3, _curWep = %4", _source, _projectile, _curMag, _curWep];

// Rubber bullets
if (((_curMag in ["30Rnd_65x39_caseless_mag"])) OR (_curWep in ["hgun_P07_F","srifle_DMR_03_F"])) then
{
	if(!(_part in ["","head","body"])) exitWith {_damage = 0;};
	systemChat format["getDammage _unit = %1, _part = '%2', getHit _part = %3, _damage = %4", getDammage _unit, _part, _unit getHit _part, _damage];
	_partDamage = if(_part == "") then {damage _unit} else { (_unit getHit _part) };
    if((((getDammage _unit) + _damage) >= 0.9) OR (_damage >= 0.95)) then
    {
    	_damage	= 0;
		[_unit,_source] spawn life_fnc_tazed;
	};
};

_damage;