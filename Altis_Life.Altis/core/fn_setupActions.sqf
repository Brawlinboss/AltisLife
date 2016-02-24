/*
	File: fn_setupActions.sqf

	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",1.5,true,true,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];

		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",1.5,true,true,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];

		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",1.5,true,true,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && cursorTarget getVariable ["playerSurrender",false] && !(cursorTarget getVariable["Escorting",FALSE]) ']];
	};

	case west:
	{
		//Restrain Player
		life_actions = life_actions + [player addAction["<t color='#FF8000'>Restrain Person</t>",life_fnc_restrainAction,cursorTarget,2,true,true,"",'if (isPlayer cursorTarget) then { (alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable ["restrained",false]) && speed cursorTarget < 2) };']];

		//Seize Ground Objects
		life_actions = life_actions + [player addAction[localize "STR_pAct_SeizeObj",life_fnc_seizeObj,cursorTarget,1.5,true,true,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']];

		//IR Laser Add
		life_actions = life_actions + [player addAction["Add IR Laser (Non-Lethal)",life_fnc_mkDowning,"add",1.5,true,true,"",'"acc_pointer_IR" in (items player) && !("acc_pointer_IR" in (primaryWeaponItems player)) && (currentWeapon player) == "srifle_DMR_03_F"']];

		//IR Laser Remove
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Remove IR Laser (Lethal)</t>",life_fnc_mkDowning,"rem",1.5,true,true,"",'!("acc_pointer_IR" in (items player)) && ("acc_pointer_IR" in (primaryWeaponItems player)) && (currentWeapon player) == "srifle_DMR_03_F"']];

        //CopEnter - Driver Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",1.5,true,true,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];

         //CopEnter - Passenger Seat
         life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",1.5,true,true,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];

         //CopEnter - Exit
         life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",1.5,true,true,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
	};

	case independent:
	{
		/* One day we'll need this... just watch */
	};
};

//Ball Punching
life_actions = life_actions + [player addAction["Punch Balls",life_fnc_punchBallsAction,"",1.5,true,true,"",'!isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget in ["Incapacitated","amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon"]']];

//Bloodbag Self
life_actions = life_actions + [player addAction["<t color='#FF0000'>Self Bloodbag</t>",life_fnc_bloodbagself,"",1.5,false,true,"",'player isKindOf "Man" && alive player && (damage player) > 0.05 && (life_inv_bloodbag > 0)']];

//Bloodbag Others
life_actions = life_actions + [player addAction["<t color='#FF0000'>Give Bloodbag</t>",life_fnc_bloodbag,"",1.5,true,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && (damage cursorTarget) > 0.05 && cursorTarget distance player < 3.5 && (life_inv_bloodbag > 0)']];