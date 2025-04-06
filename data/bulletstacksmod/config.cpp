class CfgPatches
{
    //Was DZ_Characters_Tops
    class DayZ_AfterZero
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
            "DZ_Weapons_Magazines",
            "DZ_Gear_Containers"
		};
	};
};

class CfgMagazines
{
    //======================//
    // Ammunition Modifiers //
    //======================//

    class Ammunition_Base;
    class Ammo_45ACP: Ammunition_Base
    {
        count = 50;
    };
    class Ammo_308Win: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_308WinTracer: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_9x19: Ammunition_Base
    {
        count = 50;
    };
    class Ammo_380: Ammunition_Base
    {
        count = 50;
    };
    class Ammo_22: Ammunition_Base
    {
        count = 60;
    };
    class Ammo_12gaPellets: Ammunition_Base
    {
        count = 20;
    };
    class Ammo_12gaSlug: Ammunition_Base
    {
        count = 20;
    };
    class Ammo_12gaRubberSlug: Ammunition_Base
    {
        count = 20;
    };
    class Ammo_12gaBeanBag: Ammunition_Base
    {
        count = 20;
    };
    class Ammo_357: Ammunition_Base
    {
        count = 50;
    };
    class Ammo_545x39: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_545x39Tracer: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_556x45: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_556x45Tracer: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_762x54: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_762x54Tracer: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_762x39: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_762x39Tracer: Ammunition_Base
    {
        count = 40;
    };
    class Ammo_9x39AP: Ammunition_Base
    {
        count = 30;
    };
    class Ammo_9x39: Ammunition_Base
    {
        count = 30;
    };

    //======================//
    // Magazine Modifiers   //
    //======================//
    class Magazine_Base;
    //Need to figure this out, may have to turn it into a container..? :/
    // class DZAZ_AmmoBattlePack_Base: Ammunition_Base
    // {
    //     debug_ItemCategory = 5;
	// 	rotationFlags = 2;
	// 	itemSize[] = {5,2};
	// 	iconCartridge = 0;
	// 	iconType = 0;
	// 	repairableWithKits[] = {};
	// 	ammo = "";
	// 	spawnDamageRange[] = {0.0,0.6};
	// 	particleStrIdentifier = "";
	// 	particleLifeTime = 0;
	// 	destroyOnEmpty = 0;
	// 	varQuantityDestroyOnMin = 1;
	// 	canBeSplit = 1;
	// 	simpleHeap = 1;
	// 	soundUse = "craft_rounds";
	// 	emptySound = "craft_rounds";
    // };
    // class DZAZ_545BattlePack_RUS: Ammunition_Base
    // {
    //     itemSize[] = {5,2};
    //     scope = 2;
    //     displayName = "5.45x39mm 200Rd Battle Pack";
    //     descriptionShort = "Battle pack designed to ease ammunition carrying. Holds 200 rounds.";
    //     model = "DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_ammoBattlePack.p3d";
    //     weight = 80;
    //     count = 200;
    //     ammo = "Bullet_545x39";
    // };
    //Add item battlepack to Mag array.
    // class Mag_AK74_30Rnd: Magazine_Base
    // {
    //     ammoItems[] += {"DZAZ_545BattlePack_RUS"};
    // };
    // class Mag_AK74_45Rnd: Magazine_Base
    // {
    //     ammoItems[] += {"DZAZ_545BattlePack_RUS"};
    // };
    //Admin Drum Magazine
    class DZAZ_Admin_AKM_DrumMag400: Magazine_Base
    {
        scope = 2;
		displayName = "Admin Drug Magazine";
		descriptionShort = "$STR_CfgMagazines_Mag_AKM_Drum75Rnd1";
		model = "\DZ\weapons\attachments\magazine\magazine_akm_drum.p3d";
		rotationFlags = 12;
		weight = 1100;
		weightPerQuantityUnit = 9.0;
		itemSize[] = {3,3};
		count = 400;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DZ\weapons\attachments\data\magazine_drum_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\data\magazine_drum.rvmat"};
    };
};

//Adding BattlePack to game
/* 
 * Battlepacks are useful for storing ammo, but are much smaller than
 * the ammocan, so this will come in handy. I've also changed the item
 * size slightly, so technically it is smaller than what it can actually hold.
 * InInventory is 6 slots, it can hold 10 slots worth of ammunition.
*/
class CfgVehicles
{
    class Inventory_Base;
    class Container_Base;
    //Working on setting this up again
    //Base, models NEED a model.cfg if you want to texture them from
    //the config like this, much easier this way if you have multiple textures.
    class DZAZ_BattlePack_ColorBase: Container_Base
    {
        scope = 0;
        model = "DayZ_AfterZero\data\bulletstacksmod\data\battlepack\dzaz_ammoBattlePack.p3d";
        itemSize[] = {2,3};
        itemsCargoSize[] = {2,5};
        caBeDigged = 0;
        allowOwnedCargoManipulation = 1;
        repairableWithKits[] = {0};
        hiddenSelections[] = {"zbytek"};
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack.rvmat"}},{0.7,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack.rvmat"}},{0.5,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_damage.rvmat"}},{0.3,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_damage.rvmat"}},{0.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_destruct.rvmat"}}};
				};
			};
		};
        soundImpactType = "textile";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup
                {
                    soundSet = "sewingkit_pickup_SoundSet";
                    id = 797;
                };
            };
        };
    };
    class DZAZ_545BattlePack_RUS: DZAZ_BattlePack_ColorBase
    {
        scope = 2;
        rotationFlags = 9;
        displayName = "5.45x39mm 200Rd Battle Pack";
        descriptionShort = "Battle pack designed to ease ammunition carrying. Holds 200 rounds.";
        hiddenSelectionsTextures[]=
        {
            "DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_co.paa"
        };
        weight = 80;
        randomQuantity = 4;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack.rvmat"}},{0.7,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack.rvmat"}},{0.5,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_damage.rvmat"}},{0.3,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_damage.rvmat"}},{0.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_545battlepack\dzaz_545bpack_destruct.rvmat"}}};
				};
			};
		};
    };
    class DZAZ_556BattlePack_USA: DZAZ_BattlePack_ColorBase
    {
        scope = 2;
        rotationFlags = 9;
        displayName = "5.56x45mm 200Rd Battle Pack";
        descriptionShort = "Battle pack designed to ease ammunition carrying. Holds 200 rounds.";
        hiddenSelectionsTextures[] = {
            "DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack_co.paa"
        };
        weight = 77;
        randomQuantity = 2;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack.rvmat"}},{0.7,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack.rvmat"}},{0.5,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack_damage.rvmat"}},{0.3,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack_damage.rvmat"}},{0.0,{"DayZ_AfterZero\data\bulletstacksmod\data\dzaz_556battlepack\dzaz_556bpack_destruct.rvmat"}}};
				};
			};
		};
    };
};