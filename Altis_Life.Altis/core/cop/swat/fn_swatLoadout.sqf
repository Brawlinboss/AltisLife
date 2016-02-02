#include "..\..\..\script_macros.hpp"
/*
	File: fn_swatLoadout.sqf
	Author: Jesse Schultz

	Based of Tonics crap.

	Description:
	Loads the swat out with the default gear and doesn't save the gear...
*/
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;

{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);

if(hmd player != "") then {	player unlinkItem (hmd player); };

/* Swat Commander Loadout */
if(life_swat_commander) then
{
	player addUniform "U_Competitor";
	player addVest "V_PlateCarrier1_blk";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "arifle_MXM_Black_F";
	player addPrimaryWeaponItem "optic_Hamr";
	player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addWeapon "hgun_P07_F";
	player addMagazine "30Rnd_9x21_Mag";
	player addItem "ItemGPS";
    player assignItem "ItemGPS";
};

/* Swat Recon Loadout */
if(life_swat_recon) then
{
	player addUniform "U_Competitor";
	player addVest "V_PlateCarrier1_blk";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "arifle_MXC_Black_F";
	player addPrimaryWeaponItem "optic_Hamr";
	player addItem "B_UavTerminal";
	player addbackpack "B_UAV_01_backpack_F";
	player assignItem "B_UAVTerminal";
	player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addWeapon "hgun_P07_F";
	player addMagazine "30Rnd_9x21_Mag";
};

/* Swat Assault Loadout */
if(life_swat_assault) then
{
	player addUniform "U_Competitor";
	player addVest "V_PlateCarrier1_blk";
	player addHeadgear "H_Cap_police";
	player addPrimaryWeaponItem "optic_Hamr";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "srifle_DMR_03_F";
	player addPrimaryWeaponItem "optic_Hamr";
	player addPrimaryWeaponItem "acc_pointer_IR";
	player addPrimaryWeaponItem "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addWeapon "hgun_P07_F";
	player addPrimaryWeaponItem "30Rnd_9x21_Mag";
	player addItem "ItemGPS";
    player assignItem "ItemGPS";
};

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[] call life_fnc_playerSkins;