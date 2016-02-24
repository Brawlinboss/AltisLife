#include "..\..\script_macros.hpp"
/*
	File: fn_bloodbag.sqf
	Author: Tonic
	Second Author: [midgetgrimm]
	Third Author: Jesse Schultz

	Description: blood bag a player to give them full health and no fatgiue
*/

private["_curTarget","_distance","_isVehicle","_title","_progressBar","_cP","_titleText","_badDistance","_val"];
_curTarget = cursorTarget;
life_interrupted = false;
if(life_action_inUse) exitWith {};
if(isNull _curTarget) exitWith {}; //Bad type
_distance = ((boundingBox _curTarget select 1) select 0) + 2;
if(player distance _curTarget > _distance) exitWith {}; //Too far
if(player != vehicle player) exitWith {hint "You must exit your vehicle to give a bloodbag"};
if(_curTarget != vehicle _curTarget) exitWith {hint "You cannot perform this operation while in a vehicle";};
if((damage _curTarget) < 0.05) exitWith {hint"Don't waste a bloodbag on someone missing so little health...";};
if((_curTarget getVariable ["bloodBagged",FALSE])) exitWith {hint"Someone is already bloodbagging this person";};
if(player == _curTarget) exitWith {};
if(!isPlayer _curTarget) exitWith {};
if(life_inv_bloodbag < 1) exitWith {hint "You need a bloodbag to heal..."};
_title = format["Giving a blood transfusion to %1",name _curTarget];


//Setup the progress bar
disableSerialization;
3 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.05;

while {true} do
{
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then
	{
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.26;
	if(isNull _ui) then {
		3 cutRsc ["life_progress","PLAIN"];
		_ui = uiNamespace getVariable "life_progress";
		_progressBar = _ui displayCtrl 38201;
 	_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.03;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	_curTarget setVariable["bloodBagged",true,true];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {_curTarget setVariable["bloodBagged",false,true];}; //Tazed
	if(life_interrupted) exitWith {_curTarget setVariable["bloodBagged",false,true];};
	if(player distance _curTarget > _distance) exitWith {_badDistance = true;_curTarget setVariable["bloodBagged",false,true];};
};

//Kill the UI display and check for various states
3 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player OR life_istazed) exitWith {life_action_inUse = false;_curTarget setVariable["bloodBagged",false,true];};
if(!isNil "_badDistance") exitWith {titleText["You got to far away from the target.","PLAIN"]; life_action_inUse = false;_curTarget setVariable["bloodBagged",false,true];};
if(life_interrupted) exitWith {life_interrupted = false; titleText["Action cancelled","PLAIN"]; life_action_inUse = false;_curTarget setVariable["bloodBagged",false,true];};
_curTarget setdamage 0;
_curTarget setFatigue 0;
_curTarget setVariable["bloodBagged",false,true];

_val = 1500;
if(playerSide == independent) then { ADD(CASH,_val); hint "You have received $1,500 for your services"; };

player setVariable["bloodBagged",false,true];
[false,"bloodbag",1] call life_fnc_handleInv;
life_action_inUse = false;