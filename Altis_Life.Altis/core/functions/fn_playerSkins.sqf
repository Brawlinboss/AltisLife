#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
switch(playerSide) do
{
	case civilian:
	{
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then
		{
			if(uniform player == "U_C_Poloshirt_blue") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_burgundy") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_stripped") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_tricolour") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_salmon") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_redwhite") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
			};
			if(uniform player == "U_C_Commoner1_1") then
			{
				player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
			};
		};
	};
	case west:
	{
		if (uniform player == "U_Competitor" && (FETCH_CONST(life_coplevel) == 1)) then
		{
		    player setObjectTextureGlobal [0, "textures\uniform_cadet.paa"];
	    };
	    if (uniform player == "U_Competitor" && (FETCH_CONST(life_coplevel) == 2)) then
	    {
		     player setObjectTextureGlobal [0, "textures\uniform_const.paa"];
		};
		if (uniform player == "U_Competitor" && (FETCH_CONST(life_coplevel) == 3)) then
		{
		    player setObjectTextureGlobal [0, "textures\uniform_corp.paa"];
		};
		if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 4)) then
		{
		    player setObjectTextureGlobal [0, "textures\police_combatu_sgt.paa"];
		};
		if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 5)) then
		{
		    player setObjectTextureGlobal [0, "textures\police_combatu_lt.paa"];
		};
		if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 6)) then
		{
		    player setObjectTextureGlobal [0, "textures\police_combatu_captain.paa"];
		};
	};
	case independent:
	{
		if(uniform player == "U_Rangemaster") then
		{
			player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
		};
	};
};
