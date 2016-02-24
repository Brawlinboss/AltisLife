class CarShops
{
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    */
    class civ_car
    {
        side = "civ";
        vehicles[] =
        {
            { "B_Quadbike_01_F", 750, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 1500, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 3500, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 4000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 5750, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 9500, { "driver" }, { "", "", -1 } }

        };
    };

    class hunting_car
    {
        side = "civ";
        vehicles[] =
        {
            { "I_Quadbike_01_F", 750, { "hunting" }, { "", "", -1 } },
            { "C_Offroad_stripped_F", 2750, { "hunting" }, { "", "", -1 } }
        };
    };

    class kart_shop
    {
        side = "civ";
        vehicles[] =
        {
            { "C_Kart_01_Blu_F", 1200 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 1200, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 1200, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 1200, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop
    {
        side = "med";
        vehicles[] =
        {
            { "C_Offroad_01_F", 1000, { "" }, { "", "", -1 } },
            { "I_Truck_02_medical_F", 35000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 55000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 45000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs
    {
        side = "med";
        vehicles[] =
        {
            { "B_Heli_Light_01_F", 25000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck
    {
        side = "civ";
        vehicles[] =
        {
            { "C_Van_01_box_F", 12500, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 20000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 22500, { "trucking" }, { "", "", -1 } },
            { "O_Truck_02_covered_F", 27500, { "trucking" }, { "", "", -1 } },
            { "O_Truck_02_transport_F", 32500, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car
    {
        side = "civ";
        vehicles[] =
        {
            { "B_Quadbike_01_F", 600, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 3400, { "rebel" }, { "", "", -1 } },
            { "O_MRAP_02_F", 75000, { "rebel" }, { "", "", -1 } },
            { "O_G_Offroad_01_armed_F", 120000, { "rebel" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 6500, { "rebel" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 6500, { "rebel" }, { "", "", -1 } },
            { "C_SUV_01_F", 4000, { "rebel" }, { "", "", -1 } }
        };
    };

    class undercover_rebel
    {
        side = "cop";
        vehicles[] =
        {
            { "B_Quadbike_01_F", 100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_G_Offroad_01_F", 900, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "O_MRAP_02_F", 1200, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "O_G_Offroad_01_armed_F", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_Hatchback_01_F", 3000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_Hatchback_01_sport_F", 12000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_SUV_01_F", 15000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "O_Heli_Light_02_unarmed_F", 100000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_Heli_Light_01_F", 65000, { "" }, { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_car
    {
        side = "cop";
        vehicles[] =
        {
            { "C_Quadbike_01_F", 100, { "" }, { "life_coplevel", "SCALAR", 1 } },
            { "C_Offroad_01_F", 900, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_Hatchback_01_F", 1200, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_Hatchback_01_sport_F", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_SUV_01_F", 3000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", 12000, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "I_MRAP_03_F", 15000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_G_Offroad_01_armed_F", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class reb_air
    {
        side = "civ";
        vehicles[] =
        {
            { "O_Heli_Light_02_unarmed_F", 100000, { "rebel" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 65000, { "rebel" }, { "", "", -1 } },
			{ "I_Heli_Transport_02_F", 165000, { "rebel" }, { "", "", -1 } }
        };
    };

    class civ_air
    {
        side = "civ";
        vehicles[] =
        {
            { "C_Heli_Light_01_civil_F", 52500, { "pilot" }, { "", "", -1 } },
			{ "I_Plane_Fighter_03_AA_F", 1525500, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air
    {
        side = "cop";
        vehicles[] =
        {
            { "B_Heli_Light_01_F", 25000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_light_03_unarmed_F", 40000, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F", 75000, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "I_Heli_Transport_02_F", 85000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_Heli_Transport_03_unarmed_F", 85000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_Heli_Transport_01_F", 90000, { "" }, { "life_coplevel", "SCALAR", 6 } }
        };
    };


    class cop_ship
    {
        side = "cop";
        vehicles[] =
        {
            { "B_Boat_Transport_01_F", 3000, { "" }, { "", "", 2 } },
            { "C_Boat_Civil_01_police_F", 7000, { "" }, { "", "", 2 } },
            { "B_SDV_01_F", 7000, { "" }, { "", "", 2 } }
        };
    };

    class civ_ship
    {
        side = "civ";
        vehicles[] =
        {
            { "C_Rubberboat", 1250, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 3000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 8000, { "boat" }, { "", "", -1 } }
        };
    };
};

/*
*    Vehicle Configs
*
*    storageFee (Getting vehicles out of garage) format:
*        INDEX 0: Civilian Price
*        INDEX 1: Cop Price
*        INDEX 2: EMS Price
*        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
*
*    garageSell (Selling vehicles from garage) format:
*        INDEX 0: Civilian Price
*        INDEX 1: Cop Price
*        INDEX 2: EMS Price
*        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
*
*    Textures config follows { Texture Name, side, {texture(s)path}}
*    Texture(s)path follows this format:
*    INDEX 0: Texture Layer 0
*    INDEX 1: Texture Layer 1
*    INDEX 2: Texture Layer 2
*/

class LifeCfgVehicles
{
    class Default
    {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Plane_Fighter_03_AA_F
    {
        vItemSpace = 15;
        storageFee[] = { 55000, 35000, 0, 0 };
        garageSell[] = { 72500, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {};
    };

	class I_Heli_Transport_02_F
    {
        vItemSpace = 650;
        storageFee[] = { 55000, 22000, 0, 0 };
        garageSell[] = { 72500, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class O_Truck_02_transport_F
    {
        vItemSpace = 320;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 1500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = {};
    };

    class O_Truck_02_covered_F
    {
        vItemSpace = 320;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 1500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = {};
    };

    class I_Truck_02_medical_F
    {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = {};
    };

    class O_Truck_03_medical_F
    {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 3000, 0 };
        garageSell[] = { 0, 0, 10000, 0 };
        insurance = 2500;
        chopShop = 7500;
        textures[] = {};
    };

    class B_Truck_01_medical_F
    {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class C_Rubberboat
    {
        vItemSpace = 100;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_Heli_Transport_03_unarmed_F
    {
        vItemSpace = 700;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] = {};
    };

    class B_Heli_Light_01_F
    {
        vItemSpace = 75;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] =
        {
            { "Police", "cop", {
                "textures\police_heli.paa"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F
    {
        vItemSpace = 120;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] =
        {
            { "Police", "cop", {
                "textures\police_hellcat.paa"
            } }
        };
    };

    class B_Heli_Transport_01_F
    {
        vItemSpace = 20;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 65000;
        textures[] = {};
    };

    class B_Boat_Transport_01_F
    {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 1500;
        textures[] = { };
    };

    class Land_CargoBox_V1_F
    {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F
    {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F
    {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F
    {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F
    {
        vItemSpace = 25;
        storageFee[] = { 750, 500, 650, 850 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = { };
    };

    class O_G_Offroad_01_armed_F
    {
        vItemSpace = 25;
        storageFee[] = { 750, 500, 650, 850 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = { };
    };

    class B_SDV_01_F
    {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F
    {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F
    {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_Truck_01_box_F
    {
        vItemSpace = 1150;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6500;
        textures[] = { };
    };

    class B_Truck_01_transport_F
    {
        vItemSpace = 850;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 15200;
        textures[] = { };
    };

    class O_MRAP_02_F
    {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = { };
    };

    class I_MRAP_03_F
    {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] =
        {
            { "Police", "cop", {
                "textures\Police_Stridert.paa"
            } }
        };
    };

    class C_Offroad_01_F
    {
        vItemSpace = 175;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] =
        {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Police", "cop", {
                "textures\police_offroad.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
        };
    };

    class C_Kart_01_Blu_F
    {
        vItemSpace = 20;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 500, 0, 0, 0 };
        inusrance = 165;
        chopShop = 500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F
    {
        vItemSpace = 20;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 500, 0, 0, 0 };
        inusrance = 165;
        chopShop = 500;
        textures[] = {};
    };

    class C_Kart_01_Red_F
    {
        vItemSpace = 20;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 300, 0, 0, 0 };
        inusrance = 165;
        chopShop = 500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F
    {
        vItemSpace = 20;
        storageFee[] = { 100, 0, 0, 0 };
        garageSell[] = { 300, 0, 0, 0 };
        inusrance = 165;
        chopShop = 500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F
    {
        vItemSpace = 60;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 4500;
        chopShop = 3500;
        textures[] =
        {
            { "Police", "cop", {
                "textures\police_hatchback.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } }
        };
    };

    class C_Offroad_stripped_F
    {
        vItemSpace = 175;
        storageFee[] = { 312, 0, 0, 0 };
        garageSell[] = { 2400, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2250;
        textures[] =
        {
            { "Hunting", "civ", {
                "textures\hunting_offroad.jpg"
            } }
        };
    };

    class I_Quadbike_01_F
    {
        vItemSpace = 35;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 200;
        chopShop = 200;
        textures[] =
        {
            { "Hunting", "civ", {
                "textures\hunting_quadbike.jpg"
            } }
        };
    };

    class B_Quadbike_01_F
    {
        vItemSpace = 35;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] =
        {
            { "Police", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class C_Hatchback_01_F
    {
        vItemSpace = 90;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 500, 3500, 0, 0 };
        insurance = 500;
        chopShop = 750;
        textures[] =
        {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F
    {
        vItemSpace = 140;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 1500, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 2000;
        textures[] =
        {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Police", "cop", {
                "textures\police_suv.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } }
        };
    };

    class C_Van_01_transport_F
    {
        vItemSpace = 220;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] =
        {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F
    {
        vItemSpace = 350;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] =
        {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F
    {
        vItemSpace = 0;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] =
        {
            { "Police", "cop", {
                "textures\Police_hunter_1.paa",
                "textures\Police_hunter_2.paa"
            } }
        };
    };

    class C_Heli_Light_01_civil_F
    {
        vItemSpace = 40;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] =
        {
            { "Civ Black", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "EMS White", "civ", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F
    {
        vItemSpace = 120;
        storageFee[] = { 55000, 0, 22000, 0 };
        garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] =
        {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "rebel", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "rebel", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "rebel", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } }
        };
    };
};
