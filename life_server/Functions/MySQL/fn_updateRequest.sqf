/*
	File: fn_updateRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Ain't got time to describe it, READ THE FILE NAME!
*/
private["_uid","_side","_cash","_bank","_licenses","_gear","_stats","_name","_query","_thread","_damage"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_side = [_this,2,sideUnknown,[civilian]] call BIS_fnc_param;
_cash = [_this,3,0,[0]] call BIS_fnc_param;
_bank = [_this,4,5000,[0]] call BIS_fnc_param;
_licenses = [_this,5,[],[[]]] call BIS_fnc_param;
_gear = [_this,6,[],[[]]] call BIS_fnc_param;
_stats = [_this,7,[100,100],[[]]] call BIS_fnc_param;
_damage = [_this,8,[],[]] call BIS_fnc_param;

//Get to those error checks.
if((_uid == "") OR (_name == "")) exitWith {};

//Parse and setup some data.
_name = [_name] call DB_fnc_mresString;
_gear = [_gear] call DB_fnc_mresArray;
_stats = [_stats] call DB_fnc_mresArray;
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

for "_i" from 0 to count(_licenses)-1 do
{
	_bool = [(_licenses select _i) select 1] call DB_fnc_bool;
	_licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

_licenses = [_licenses] call DB_fnc_mresArray;

switch (_side) do
{
	case west:
	{
		_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', cop_gear='%4', cop_licenses='%5', cop_stats='%6', cop_damage='%7' WHERE playerid='%8'",_name,_cash,_bank,_gear,_licenses,_stats,_damage,_uid];
	};
	case civilian:
	{_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_licenses='%4', civ_gear='%5', arrested='%6', civ_stats='%7', civ_damage='%8', civ_position='%9', civ_direction='%10' WHERE playerid='%11'",_name,_cash,_bank,_licenses,_gear,[_this select 9] call DB_fnc_bool,_stats,_damage,_this select 10,_this select 11,_uid];
};
	case independent:
	{
		_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', med_licenses='%4', med_gear='%5', med_stats='%6', med_damage='%7' WHERE playerid='%8'",_name,_cash,_bank,_licenses,_gear,_stats,_damage,_uid];
	};
};

_queryResult = [_query,1] call DB_fnc_asyncCall;