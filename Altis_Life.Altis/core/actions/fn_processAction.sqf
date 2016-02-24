#include "..\..\script_macros.hpp"
/*
	File: fn_processAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master handling for processing an item(s).
*/
private["_vendor","_type","_itemInfo","_oldItem","_oldItem2","_newItem","_cost","_upp","_hasLicense","_itemName","_oldVal","_oldVal2","_ui","_progress","_pgText","_cP","_error1","_error2"];
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;
//Error check
if(isNull _vendor OR EQUAL(_type,"") OR (player distance _vendor > 10)) exitWith {};

_error1 = false;
_error2 = false;

//unprocessed item,processed item, cost if no license,Text to display (I.e Processing  (percent) ..."
_itemInfo = switch (_type) do
{
	case "oil": {["oil_unprocessed","oil_processed",10,(localize "STR_Process_Oil"),false];};
	case "diamond": {["diamond_uncut","diamond_cut",50,(localize "STR_Process_Diamond"),false];};
	case "heroin": {["heroin_unprocessed","heroin_processed",150,(localize "STR_Process_Heroin"),false];};
	case "copper": {["copper_unrefined","copper_refined",70,(localize "STR_Process_Copper"),false];};
	case "iron": {["iron_unrefined","iron_refined",120,(localize "STR_Process_Iron"),false];};
	case "sand": {["sand","glass",200,(localize "STR_Process_Sand"),false];};
	case "salt": {["salt_unrefined","salt_refined",300,(localize "STR_Process_Salt"),false];};
	case "cocaine": {["cocaine_unprocessed","cocaine_processed",300,(localize "STR_Process_Cocaine"),false];};
	case "marijuana": {["cannabis","marijuana",100,(localize "STR_Process_Marijuana"),false];};
	case "cement": {["rock","cement",200,(localize "STR_Process_Cement"),false];};
	case "mash": {["sugar","mash",200,(localize "STR_Process_Mash"),true,"corn"];};
	case "moonshine": {["mash","moonshine",0,(localize "STR_Process_Moonshine"),false];};
	case "moonshine": {["mash","moonshineQual",250,(localize "STR_Process_MoonshineQual"),false];};
	case "fermwine": {["sugar","fermwine",0,(localize "STR_Process_FermWine"),true,"grape"];};
	case "wine": {["fermwine","wine",150,(localize "STR_Process_Wine"),false];};
	default {[];};
};

//Error checking
if(EQUAL(count _itemInfo,0)) exitWith {};

//Setup vars.
_oldItem = SEL(_itemInfo,0);
_newItem = SEL(_itemInfo,1);
_cost = SEL(_itemInfo,2);
_upp = SEL(_itemInfo,3);
_var2 = SEL(_itemInfo,4);
if(_var2) then {_oldItem2 = SEL(_itemInfo,5);};

if(_vendor in [mari_processor,coke_processor,heroin_processor]) then
{
	_hasLicense = true;
}
else
{
	_hasLicense = LICENSE_VALUE(_type,"civ");
};

_itemName = M_CONFIG(getText,"VirtualItems",_newItem,"displayName");
_oldVal = ITEM_VALUE(_oldItem);

if(_var2) then {_oldVal2 = ITEM_VALUE(_oldItem2);};
if(_var2) then
{
	if(_oldVal != _oldVal2) then
	{
		if(_oldVal > _oldVal2) then {_error1 = true;};
		if(_oldVal2 > _oldVal) then {_error2 = true;};
	};
};

if(_error1) exitWith{hint format["You have too much %1, you need equal amounts",localize _oldItem];};
if(_error2) exitWith{hint format["You have too much %1, you need equal amounts",localize _oldItem2];};

_cost = _cost * _oldVal;

if(EQUAL(_oldVal,0)) exitWith {};

//Setup our progress bar.
disableSerialization;
3 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

life_is_processing = true;

if(_hasLicense) then
{
	while{true} do
	{
		sleep  0.3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vendor > 10) exitWith {};
	};

	if(player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 3 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {3 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {3 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
	3 cutText ["","PLAIN"];
	titleText[format[localize "STR_Process_Processed",localize _oldVal,localize _itemName],"PLAIN"];
	life_is_processing = false;

	if(_var2) then
	{
		([false,_oldItem2,_oldVal2] call life_fnc_handleInv);
		3 cutText ["","PLAIN"];
		titleText[format["You have processed %1 and %2 into %3.",localize _oldItem,localize _oldItem2,localize _itemName],"PLAIN"];
	}
	else
	{
		3 cutText ["","PLAIN"];
		titleText[format["You have processed %1 into %2.",localize _oldItem,localize _itemName],"PLAIN"];
	};

life_is_processing = false;

}
else
{
	if(BANK < _cost) exitWith {hint format[localize "STR_Process_License",[_cost] call life_fnc_numberText]; 3 cutText ["","PLAIN"]; life_is_processing = false;};

	while{true} do
	{
		sleep  0.9;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vendor > 10) exitWith {};
	};

	if(player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 3 cutText ["","PLAIN"]; life_is_processing = false;};
	if(BANK < _cost) exitWith {hint format[localize "STR_Process_License",[_cost] call life_fnc_numberText]; 3 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {3 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {3 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
	3 cutText ["","PLAIN"];

	titleText[format[localize "STR_Process_Processed2",localize _oldVal,localize _itemName,[_cost] call life_fnc_numberText],"PLAIN"];

	if(_var2) then
	{
		([false,_oldItem2,_oldVal2] call life_fnc_handleInv);
		3 cutText ["","PLAIN"];
		titleText[format["You have processed %1 and %2 into %3 for %4.",localize _oldItem,localize _oldItem2,localize _itemName,[_cost] call life_fnc_numberText],"PLAIN"];
	}
	else
	{
		3 cutText ["","PLAIN"];
		titleText[format["You have processed %1 into %2 for %3.",localize _oldVal,localize _itemName,[_cost] call life_fnc_numberText],"PLAIN"];
	};

	SUB(BANK,_cost);
	life_is_processing = false;
};