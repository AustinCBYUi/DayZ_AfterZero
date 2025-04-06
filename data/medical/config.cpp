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
            "DZ_Gear_Medical"
		};
	};
};

class CfgVehicles
{
    class Inventory_Base;
    class Switchable_Base;
    class Edible_Base;
    class DZAZ_Bandage_Level_2: Inventory_Base
    {
        scope = 2;
        displayName = "Bandage Level II";
        descriptionShort = "A bandage crafted by someone with medical knowledge.";
        model = "DayZ_AfterZero\data\medical\data\dzaz_bandage_model\dzaz_israeli_bandage.p3d";
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[] = {"DayZ_AfterZero\data\medical\data\dzaz_bandage2\dzaz_bandageL2_co.paa"};
        debug_ItemCategory = 7;
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 6;
		varQuantityMin = 0;
		varQuantityMax = 6;
		varTemperatureMax = 1;
		varCleannessInit = 1;
		rotationFlags = 17;
		weight = 10;
		weightPerQuantityUnit = 30.0;
		absorbency = 0.8;
		itemSize[] = {1,2};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundImpactType = "textile";
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\bandage.rvmat"}},{0.7,{"DZ\gear\medical\data\bandage.rvmat"}},{0.5,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\bandage_destruct.rvmat"}}};
				};
			};
		};
        class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
    };


    class DZAZ_MedicalAbsorbent: Inventory_Base
    {
        scope = 2;
        displayName = "Medical Absorbent";
        descriptionShort = "This medical absorbent can be combined with a bandage and the right knowledge to create better bandages.";
        model = "DayZ_AfterZero\data\medical\data\dzaz_medAbsorbent\dzaz_medAbsorbent.p3d";
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[] = {"DayZ_AfterZero\data\medical\data\dzaz_medAbsorbent\dzaz_medicalabsorb_co"};
        debug_ItemCategory = 7;
		isMeleeWeapon = 1;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 4;
		varQuantityMin = 0;
		varQuantityMax = 4;
		varTemperatureMax = 1;
		varCleannessInit = 1;
		rotationFlags = 17;
		weight = 10;
		weightPerQuantityUnit = 30.0;
		absorbency = 0.8;
		itemSize[] = {2,2};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundImpactType = "plastic";
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\BloodTest.rvmat"}},{0.7,{"DZ\gear\medical\data\BloodTest.rvmat"}},{0.5,{"DZ\gear\medical\data\BloodTest_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\BloodTest_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\BloodTest_destruct.rvmat"}}};
				};
			};
		};
    };
};