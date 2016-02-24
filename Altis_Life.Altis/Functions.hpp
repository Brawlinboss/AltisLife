class Socket_Reciever
{
	tag = "SOCK";
	class SQL_Socket
	{
		file = "core\session";
		class dataQuery {};
		class insertPlayerInfo {};
		class requestReceived {};
		class syncData {};
		class updatePartial {};
		class updateRequest {};
	};
};

class Life_Client_Core
{
	tag = "life";

	class Master_Directory
	{
		file = "core";
		class initCiv {};
		class initCop {};
		class initMedic {};
		class setupActions {};
		class setupEVH {};
		class survival {};
	};

	class Admin
	{
		file = "core\admin";
		class adminCompensate {};
		class adminDebugCon {};
		class adminFreeze {};
		class adminGodMode {};
		class adminid {};
		class admininfo {};
		class adminMarkers {};
		class adminMenu {};
		class adminQuery {};
		class adminSpectate {};
		class adminTeleport {};
		class adminTpHere {};
	};

	class Medical_System
	{
		file = "core\medical";
		class bloodbag {};
		class bloodbagself {};
		class deathScreen {};
		class medicLights {};
		class medicLoadout {};
		class medicMarkers {};
		class medicRequest {};
		class medicSiren {};
		class medicSirenLights {};
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class requestMedic {};
		class respawned {};
		class revived {};
		class revivePlayer {};
	};

	class Actions
	{
		file = "core\actions";
		class arrestAction {};
		class buyLicense {};
		class captureHideout {};
		class catchFish {};
		class catchTurtle {};
		class dpFinish {};
		class dropFishingNet {};
		class escortAction {};
		class gather {};
		class getDPMission {};
		class gutAnimal {};
		class healHospital {};
		class impoundAction {};
		class mkDowning {};
		class packupSpikes {};
		class pickaxeUse {};
		class pickupItem {};
		class pickupMoney {};
		class postBail {};
		class processAction {};
		class pulloutAction {};
		class pushVehicle {};
		class putInCar {};
		class repairTruck {};
		class removeContainer {};
		class restrainAction {};
		class robAction {};
		class robBank {};
		class robGas {};
		class searchAction {};
		class seizePlayerAction {};
		class searchVehAction {};
		class seizeVehAction {};
		class serviceChopper {};
		class stopEscorting {};
		class storeVehicle {};
		class surrender {};
		class ticketAction {};
		class unrestrain {};
	};

	class Housing
	{
		file = "core\housing";
		class buyHouse {};
		class containerMenu {};
		class copBreakDoor {};
		class copHouseOwner {};
		class garageRefund {};
		class getBuildingPositions {};
		class houseMenu {};
		class initHouses {};
		class lightHouse {};
		class lightHouseAction {};
		class lockHouse {};
		class lockupHouse {};
		class placeContainer {};
		class PlayerInBuilding {};
		class raidHouse {};
		class sellHouse {};
	};

	class Config
	{
		file = "core\config";
		class houseConfig {};
		class itemWeight {};
		class taxRate {};
		class vehicleAnimate {};
		class vehicleWeightCfg {};
	};

	class Player_Menu
	{
		file = "core\pmenu";
		class cellphone {};
		class giveItem {};
		class giveMoney {};
		class keyDrop {};
		class keyGive {};
		class keyMenu {};
		class p_openMenu {};
		class p_updateMenu {};
		class pardon {};
		class removeItem {};
		class s_onChar {};
		class s_onCheckedChange {};
		class s_onSliderChange {};
		class settingsMenu {};
		class updateViewDistance {};
		class useItem {};
		class wantedInfo {};
		class wantedList {};
		class wantedMenu {};
		class wantedAddP {};
	};

	class Functions
	{
		file = "core\functions";
		class accType {};
		class actionKeyHandler {};
		class animSync {};
		class calWeightDiff {};
		class clearVehicleAmmo {};
		class combineMags {};
		class dropItems {};
		class escInterupt {};
		class fetchCfgDetails {};
		class fetchDeadGear {};
		class fetchVehInfo {};
		class giveDiff {};
		class handleDamage {};
		class handleInv {};
		class handleItem {};
		class inventoryClosed {};
		class inventoryOpened {};
		class isnumeric {};
		class isUIDActive {};
		class keyHandler {};
		class loadDeadGear {};
		class loadGear {};
		class mouseDownHandler {};
		class mouseUpHandler {};
		class nearATM {};
		class nearestDoor {};
		class nearUnits {};
		class numberText {};
		class nearestObjects {};
		class onFired {};
		class onTakeItem {};
		class playerCount {};
		class playerSkins {};
		class playerTags {};
		class pullOutVeh {};
		class pushObject {};
		class receiveItem {};
		class receiveMoney {};
		class repackMags {};
		class revealObjects {};
		class saveGear {};
		class simDisable {};
		class stripDownPlayer {};
		class tazeSound {};
	};

	class Network
	{
		file = "core\functions\network";
		class broadcast {};
		class corpse {};
		class jumpFnc {};
		class MP {};
		class MPexec {};
		class say3D {};
		class setFuel {};
		class soundDevice {};
	};

	class Civilian
	{
		file = "core\civilian";
		class civLoadout {};
		class civMarkers {};
		class demoChargeTimer {};
		class freezePlayer {};
		class jail {};
		class jailMe {};
		class knockedOut {};
		class knockoutAction {};
		class punchBalls {};
		class punchBallsAction {};
		class removeLicenses {};
		class robPerson {};
		class robReceive {};
		class tazed {};
	};

	class Vehicle
	{
		file = "core\vehicle";
		class addVehicle2Chain {};
		class colorVehicle {};
		class deviceMine {};
		class FuelRefuelcar {};
		class lockVehicle {};
		class openInventory {};
		class vehicleOwners {};
		class vehicleWeight {};
		class vehInventory {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vInteractionMenu {};
	};

	class CopPlaceables
    {
	    file = "core\cop\placeables";
	    class placeablesInit {};
	    class placeablesMenu {};
	    class placeablesRemove {};
	    class placeablesRemoveAll {};
	    class placeablePlace {};
	    class placeableCancel {};
	    class placeablesPlaceComplete {};
    };

	class Cop
	{
		file = "core\cop";
		class airhorn {};
		class bountyReceive {};
		class containerInvSearch {};
		class copEnter {};
		class copInteractionMenu {};
		class copLights {};
		class copLoadout {};
		class copMarkers {};
		class copSearch {};
		class copSiren {};
		class doorAnimate {};
		class fedCamDisplay {};
		class licenseCheck {};
		class licensesRead {};
		class questionDealer {};
		class radar {};
		class repairDoor {};
		class restrain {};
		class searchClient {};
		class seizeClient {};
		class seizeObj {};
		class sirenLights {};
		class spikeStripEffect {};
		class ticketGive {};
		class ticketPaid {};
		class ticketPay {};
		class ticketPrompt {};
		class vehInvSearch {};
		class wantedGrab {};
	};

	class Swat
	{
		file = "core\cop\swat";
		class swatLoadout {};
	};

	class Undercover
	{
		file = "core\cop\undercover";
		class ucLoadout {};
	};

	class Gangs
	{
		file = "core\gangs";
		class createGang {};
		class gangCreated {};
		class gangDisband {};
		class gangDisbanded {};
		class gangInvite {};
		class gangInvitePlayer {};
		class gangKick {};
		class gangLeave {};
		class gangMenu {};
		class gangNewLeader {};
		class gangUpgrade {};
		class initGang {};
	};

	class Shops
	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
		class clothingFilter {};
		class clothingMenu {};
		class FuelStatOpen {};
 		class FuelLBchange {};
		class vehicleShopBuy {};
		class vehicleShopLBChange {};
		class vehicleShopMenu {};
		class virt_buy {};
		class virt_menu {};
		class virt_sell {};
		class virt_update {};
		class weaponShopBuySell {};
		class weaponShopFilter {};
		class weaponShopMenu {};
		class weaponShopSelection {};
	};

	class Items
	{
		file = "core\items";
		class blastingCharge {};
		class boltcutter {};
		class debitCard {};
		class defuseKit {};
		class flashbang {};
		class jerryRefuel {};
		class lockpick {};
		class spikeStrip {};
		class storageBoxBig {};
		class storageBoxSmall {};
		class placestorageBig {};
		class placestorageSmall {};
		class placedefinestorage {};
	};

	class Dialog_Controls
	{
		file = "dialog\function";
		class bankDeposit {};
		class bankTransfer {};
		class bankWithdraw {};
		class displayHandler {};
		class gangDeposit {};
		class gangWithdraw {};
		class garageLBChange {};
		class impoundMenu {};
		class progressBar {};
		class safeFix {};
		class safeInventory {};
		class safeOpen {};
		class safeTake {};
		class sellGarage {};
		class setMapPosition {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class unimpound {};
		class vehicleGarage {};
		class wireTransfer {};
	};
};