/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*/
class WeaponShops
{
    class hunting
    {
        name = "Hunting Outpost";
        side = "civ";
        license = "hunting";
        level = -1;
        msg = "";
        items[] =
        {
            { "srifle_DMR_01_F", "", 5250 2000 },
            { "10Rnd_762x54_Mag", "", 225, 55 },
            { "optic_Hamr", "", 450, 200 },
            { "optic_MRCO", "", 475, 200 },
            { "optic_Arco", "", 525, 200 }
        };
    };

    class gun
    {
        name = "Altis Armory";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "hgun_Rook40_F", "", 2000, 1200 },
            { "hgun_Pistol_heavy_02_F", "", 3500, 2000 },
            { "hgun_ACPC2_F", "", 2750, 1900 },
            { "hgun_PDW2000_F", "", 4500 2250 },
            { "arifle_SDAR_F", "", 4750 2400 },
            { "optic_ACO_grn_smg", "", 200, 100 },
            { "16Rnd_9x21_Mag", "", 25, 11 },
            { "9Rnd_45ACP_Mag", "", 30, 15 },
            { "6Rnd_45ACP_Cylinder", "", 35, 18 },
            { "30Rnd_9x21_Mag", "", 110, 65 },
            { "20Rnd_556x45_UW_mag", "", 120, 70 }
        };
    };

    class rebel
    {
        name = "Han's Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "arifle_TRG20_F", "", 5250, 2500 },
            { "arifle_Katiba_F", "", 6500, 3250 },
            { "arifle_Katiba_C_F", "", 6000, 2750 },
            { "srifle_DMR_01_F", "", 7500, 5000 },
            { "srifle_DMR_03_khaki_F", "", 9250, 7500 },
            { "srifle_DMR_03_tan_F", "", 9250, 7500 },
            { "srifle_DMR_03_multicam_F", "", 9250, 7500 },
            { "srifle_DMR_03_woodland_F", "", 9250, 7500 },
            { "srifle_DMR_06_camo_F", "", 9750, 7750 },
            { "srifle_DMR_06_olive_F", "", 9750, 7750 },
            { "srifle_EBR_F", "", 8750, 7250 },
            { "LMG_Mk200_F", "", 50000, 25000 },
            { "hgun_Rook40_F", "", 1750, 1200 },
            { "hgun_ACPC2_F", "", 2750, 1250 },
            { "hgun_Pistol_heavy_02_F", "", 3250, 2000 },
            { "SMG_01_F", "", 5000, 2250 },
            { "hgun_PDW2000_F", "", 3500, 1520 },
            { "arifle_SDAR_F", "", 4250, 2000 },
            { "optic_ACO_grn", "", 200, 100 },
            { "optic_Holosight", "", 225, 115 },
            { "optic_Holosight_smg", "", 225, 115 },
            { "acc_flashlight", "", 75, 25 },
            { "optic_Hamr", "", 450, 225 },
            { "optic_Arco", "", 475, 232 },
            { "optic_MRCO", "", 500, 250 },
            { "200Rnd_65x39_cased_Box", "", 4500, 1750 },
            { "30Rnd_9x21_Mag", "", 100, 50 },
            { "20Rnd_556x45_UW_mag", "", 100, 50 },
            { "30Rnd_556x45_Stanag", "", 120, 50 },
            { "10Rnd_762x54_Mag", "", 150, 75 },
            { "30Rnd_65x39_caseless_green", "", 145, 75 },
            { "20Rnd_762x51_Mag", "", 225, 115 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 125, 68 },
            { "6Rnd_45ACP_Cylinder", "", 30, 15 },
            { "9Rnd_45ACP_Mag", "", 25, 12 },
            { "SmokeShellRed", "", 100, 50 },
            { "SmokeShellGreen", "", 100, 50 },
            { "SmokeShellYellow", "", 100, 50 },
            { "SmokeShellPurple", "", 100, 50 },
            { "SmokeShellBlue", "", 100, 50 },
            { "SmokeShellOrange", "", 100, 50 },
            { "SmokeShell", "", 100, 50 }
        };
    };


    class rebelSupplies
    {
        name = "Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "ItemWatch", "", 10, 5 },
            { "ItemCompass", "", 20, 10 },
            { "ItemGPS", "", 40, 20 },
            { "ItemMap", "", 25, 15 },
            { "Binocular", "", 10, 5 },
            { "NVGoggles", "", 60, 35 },
            { "NVGoggles_INDEP", "", 60, 30 },
            { "FirstAidKit", "", 50, 25 }
        };
    };

    class gang
    {
        name = "Arms Dealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "hgun_Rook40_F", "", 1500, 1000 },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250 },
            { "hgun_ACPC2_F", "", 2000, 1000 },
            { "hgun_PDW2000_F", "", 3000, 1500 },
            { "optic_ACO_grn_smg", "", 50, 25 },
            { "V_Rangemaster_belt", "", 900, 450 },
            { "16Rnd_9x21_Mag", "", 15, 7 },
            { "9Rnd_45ACP_Mag", "", 20, 10 },
            { "6Rnd_45ACP_Cylinder", "", 20, 10 },
            { "30Rnd_9x21_Mag", "", 45, 25 }
        };
    };

    //Basic Shops
    class genstore
    {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 70, -1 },
            { "ItemGPS", "", 90, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 15, -1 },
            { "ItemWatch", "", 25, -1 },
            { "FirstAidKit", "", 50, -1 },
            { "NVGoggles", "", 200, -1 }
        };
    };

    class f_station_store
    {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 70, -1 },
            { "ItemGPS", "", 90, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 15, -1 },
            { "ItemWatch", "", 25, -1 },
            { "FirstAidKit", "", 50, -1 },
            { "NVGoggles", "", 200, -1 }
        };
    };

    //copgen
    class copstore
    {
        name = "store";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a cop!" };
        items[] = {
            { "ItemWatch", "", 10, -1 },
            { "Binocular", "", 15, -1 },
            { "FirstAidKit", "", 15, -1 },
            { "ItemCompass", "", 50, -1 },
            { "ItemGPS", "", 12, -1 },
            { "ItemMap", "", 30, -1 },
            { "NVGoggles_OPFOR", "", 30, -1 }
        };
    };

    //Cop Shops
    class cop_cadet
    {
        name = "Cadet Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a Cadet!" };
        items[] =
        {
            { "arifle_TRG20_F", "", 2000, -1 },
            { "hgun_P07_F", "", 500, -1 },
            { "16Rnd_9x21_Mag", "", 50, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 125, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 }
        };
    };

    class cop_constable
    {
        name = "Constable Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Constable!" };
        items[] =
        {
            { "hgun_P07_F", "", 200, -1 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 1500, -1 },
            { "20Rnd_556x45_UW_mag", "", 75, -1 },
            { "arifle_TRG21_F", "", 2000, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, -1 },
            { "arifle_MX_Black_F", "", 3500, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, -1 },
            { "optic_MRCO", "", 750, -1 },
            { "optic_Holosight", "", 1200, -1 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 }
        };
    };

    class cop_corporal
    {
        name = "Corporal Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Corporal!" };
        items[] =
        {
            { "hgun_P07_F", "", 500, -1 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 2000, -1 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, -1 },
            { "arifle_MX_Black_F", "", 3500, -1 },
            { "arifle_MXM_Black_F", "", 4000, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, -1 },
            { "optic_Holosight", "", 1200, -1 },
            { "optic_MRCO", "", 350, -1 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 350, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 }
        };
    };

	class cop_sergeant
    {
        name = "Sergeant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] =
        {
            { "hgun_P07_F", "", 500, -1 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 2000, -1 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, -1 },
            { "arifle_MX_Black_F", "", 3500, -1 },
            { "arifle_MXM_Black_F", "", 4000, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 75, -1 },
            { "optic_Holosight", "", 120, -1 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 350, -1 },
            { "optic_MRCO", "", 350, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
			{ "arifle_MX_GL_Black_F", "", 4000, -1 },
            { "3Rnd_Smoke_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 170, -1 },
			{ "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 500, -1 }
        };
    };

	class cop_lieutenant
    {
        name = "Lieutenant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant!" };
        items[] =
        {
            { "hgun_P07_F", "", 500, -1 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "hgun_Pistol_heavy_01_F", "", 1500, -1 },
            { "11Rnd_45ACP_Mag", "", 50, -1 },
            { "arifle_SDAR_F", "", 2000, -1 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, -1 },
            { "arifle_MX_Black_F", "", 3500, -1 },
            { "arifle_MXM_Black_F", "", 4000, -1 },
            { "arifle_MX_GL_Black_F", "", 4500, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "arifle_MX_SW_Black_F", "", 5000, -1 },
            { "100Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "srifle_DMR_03_F", "", 5500, -1 },
            { "20Rnd_762x51_Mag", "Lethal unless IR is equipped", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 170, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "3Rnd_Smoke_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeRed_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeGreen_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeYellow_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokePurple_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeBlue_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeOrange_Grenade_shell", "", 170, -1 },
            { "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 500, -1 },
            { "acc_pointer_IR", "", 750, -1 },
            { "optic_MRCO", "", 750, -1 },
            { "optic_Holosight", "", 1200, -1 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 }
        };
    };

    //Medic Shops
    class med_basic
    {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "ItemGPS", "", 100, -1 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 250, -1 },
            { "NVGoggles", "", 120, -1 },
            { "B_FieldPack_ocamo", "", 300, -1 }
        };
    };
};