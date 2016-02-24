#include "..\..\script_macros.hpp"
/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Loads the cops out with the default gear.
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

/* Cadet Loadout */
if(FETCH_CONST(life_coplevel) == 1) then
{
	player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_P07_F";
	player addHandgunItem "muzzle_snds_L";
	player addSecondaryWeaponItem "30Rnd_9x21_Mag";
	player addweapon "arifle_TRG21_F";
	player addPrimaryWeaponItem "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
};

/* Constable Loadout */
if (FETCH_CONST(life_coplevel) == 2) then
{
    player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_P07_F";
	player addHandgunItem "muzzle_snds_L";
	player addSecondaryWeaponItem "30Rnd_9x21_Mag";
	player addweapon "arifle_TRG21_F";
	player addPrimaryWeaponItem "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
};

/* Corporal Loadout */
if (FETCH_CONST(life_coplevel) == 3) then
{
	player addUniform "U_Competitor";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_P07_F";
	player addHandgunItem "muzzle_snds_L";
	player addSecondaryWeaponItem "30Rnd_9x21_Mag";
	player addWeapon "arifle_TRG21_F";
	player addPrimaryWeaponItem "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
	player addMagazine "30Rnd_556x45_Stanag_Tracer_Red";
};

/* Sergeant Loadout */
if (FETCH_CONST(life_coplevel) == 4) then
{
	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_P07_F";
	player addHandgunItem "muzzle_snds_L";
	player addSecondaryWeaponItem "30Rnd_9x21_Mag";
	player addWeapon "arifle_MXC_Black_F";
	player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag_Tracer";
	player addPrimaryWeaponItem "optic_Hamr";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
};

/* Lieutenant Loadout */
if (FETCH_CONST(life_coplevel) == 5) then
{
	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_TacVest_blk_POLICE";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_Pistol_heavy_01_F";
	player addHandgunItem "muzzle_snds_acp";
	player addHandgunItem "optic_MRD";
	player addSecondaryWeaponItem "11Rnd_45ACP_Mag";
	player addWeapon "arifle_MXC_Black_F";
	player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag_Tracer";
	player addPrimaryWeaponItem "optic_Hamr";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
	player addMagazine "30Rnd_65x39_caseless_mag_Tracer";
};

/* Captain Loadout */
if (FETCH_CONST(life_coplevel) == 6) then
{
	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_PlateCarrier1_blk";
	player addHeadgear "H_Cap_police";
	player addWeapon "NVGoggles_OPFOR";
	player addWeapon "hgun_Pistol_heavy_01_F";
	player addHandgunItem "optic_MRD";
	player addHandgunItem "muzzle_snds_acp";
	player addSecondaryWeaponItem "11Rnd_45ACP_Mag";
	player addWeapon "srifle_DMR_03_F";
	player addPrimaryWeaponItem "optic_Hamr";
	player addPrimaryWeaponItem "20Rnd_762x51_Mag";
	player addPrimaryWeaponItem "acc_pointer_IR";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
};

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
if(!life_swat_commander && !life_swat_recon && !life_swat_assault) then
{
	[] call SOCK_fnc_updateRequest;
}
else
{
	[6] call SOCK_fnc_updatePartial;
};