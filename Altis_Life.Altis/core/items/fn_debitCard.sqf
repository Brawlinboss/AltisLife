#include "..\..\script_macros.hpp"
/*
	File: fn_debitCard.sqf
	Author: Jesse Schultz

	Description:
	Use or purchase a debit card...
*/
private ["_cost","_mode","_uid","_price","_cardPrice","_transactionComplete"];
_cost = SEL(_this,0);
_mode = SEL(_this,1);
_uid = steamid;

if(life_inv_debitcard > 1) exitWith {hint format ["%1", /* Variables */];};
if(CASH < _cost && BANK < _cost) exitWith {hint format ["%1", /* Variables */];};

switch (_mode) do
{
	case 0:
	{
		_transactionComplete = false;
		if(CASH >= _cost) exitWith
		{
			SUB(CASH,_cost);
			hint format ["%1", /* Variables */];
			_transactionComplete = true;
		};

		if(life_inv_debitcard == 1) then
		{
			if(BANK < _cost) exitWith {hint format ["%1", /* Variables */];};
			if(BANK >= _cost) then
			{
				SUB(BANK,_cost);
				hint format ["%1", /* Variables */];
				_transactionComplete = true;
			};
		};
	};

	case 1:
	{
		_price = M_CONFIG(getNumber,"VirtualItems",debitcard,"buyPrice");
		_cardPrice = LIFE_SETTINGS(getNumber,"debit_cost");
		if(life_inv_debitcard > 0) exitWith {};
		if(BANK < _cardPrice) exitWith {};
		if(BANK >= _cardPrice) exitWith
		{
			SUB(BANK,_cardPrice);
			[true,"debitcard",1] call life_fnc_handleInv;
			hint format["%1",/* VARIABLES */];
			closeDialog 0;
		};
	};
};

_transactionComplete;