class CfgPatches
{
	class MRTsMREs_CRE
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Cooking","DZ_Gear_Food","MRTsMREs_Scripts"};
	};
};
class CfgSlots
{
	class Slot_CreCrayon1
	{
		name = "CreCrayon1";
		displayName = "Crayon";
	};
	class Slot_CreCrayon2
	{
		name = "CreCrayon2";
		displayName = "Crayon";
	};
	class Slot_CreCrayon3
	{
		name = "CreCrayon3";
		displayName = "Crayon";
	};
	class Slot_CreCrayon4
	{
		name = "CreCrayon4";
		displayName = "Crayon";
	};
	class Slot_CreCrayon5
	{
		name = "CreCrayon5";
		displayName = "Crayon";
	};
	class Slot_CreCrayon6
	{
		name = "CreCrayon6";
		displayName = "Crayon";
	};
	class Slot_CreCrayon7
	{
		name = "CreCrayon7";
		displayName = "Crayon";
	};
	class Slot_CreCrayon8
	{
		name = "CreCrayon8";
		displayName = "Crayon";
	};
};
class CfgVehicles
{
	class MRTsMRE_Base;
	class MRTsMRE_Open_Base;
	class Edible_Base;
	class MRTsMRE_CRE: MRTsMRE_Base
	{
		scope = 2;
		model = "\DayZ_AfterZero\data\mres\CRE\CRE.p3d";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CRE_WithDecal.paa"};
		Menu_Contents[] = {"MRTsMRE_CRE_Crayon_Blue","MRTsMRE_CRE_Crayon_Brown","MRTsMRE_CRE_Crayon_Green","MRTsMRE_CRE_Crayon_Orange","MRTsMRE_CRE_Crayon_Purple","MRTsMRE_CRE_Crayon_Red","MRTsMRE_CRE_Crayon_Teal","MRTsMRE_CRE_Crayon_Yellow"};
		displayName = "CRE";
		descriptionShort = "Crayons-Ready-To-Eat!";
	};
	class MRTsMRE_CRE_Open: MRTsMRE_Open_Base
	{
		scope = 2;
		model = "\DayZ_AfterZero\data\mres\CRE\CRE_Open.p3d";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CRE_WithDecal.paa"};
		displayName = "CRE";
		descriptionShort = "Crayons-Ready-To-Eat!";
		attachments[] = {"CreCrayon1","CreCrayon2","CreCrayon3","CreCrayon4","CreCrayon5","CreCrayon6","CreCrayon7","CreCrayon8"};
	};
	class MRTsMRE_CRE_Crayon_Base: Edible_Base
	{
		scope = 0;
		model = "\DayZ_AfterZero\data\mres\CRE\Crayon.p3d";
		hiddenSelections[] = {"zbytek"};
		descriptionShort = "An edible crayon from a CRE!";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 45;
		isMeleeWeapon = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 100;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		inventorySlot[] = {"CreCrayon1","CreCrayon2","CreCrayon3","CreCrayon4","CreCrayon5","CreCrayon6","CreCrayon7","CreCrayon8"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
		};
	};
	class MRTsMRE_CRE_Crayon_Blue: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Blue Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonBlue.paa"};
	};
	class MRTsMRE_CRE_Crayon_Brown: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Brown Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonBrown.paa"};
	};
	class MRTsMRE_CRE_Crayon_Green: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Green Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonGreen.paa"};
	};
	class MRTsMRE_CRE_Crayon_Orange: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Orange Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonOrange.paa"};
	};
	class MRTsMRE_CRE_Crayon_Purple: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Purple Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonPurple.paa"};
	};
	class MRTsMRE_CRE_Crayon_Red: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Red Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonRed.paa"};
	};
	class MRTsMRE_CRE_Crayon_Teal: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Teal Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonTeal.paa"};
	};
	class MRTsMRE_CRE_Crayon_Yellow: MRTsMRE_CRE_Crayon_Base
	{
		scope = 2;
		displayName = "Yellow Crayon";
		hiddenSelectionsTextures[] = {"\DayZ_AfterZero\data\mres\CRE\Data\CrayonYellow.paa"};
	};
};
