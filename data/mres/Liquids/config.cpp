
class CfgPatches
{
	class MRTsMRE_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Cooking",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Bottle_Base;
	class WaterPouch_ColorBase: Bottle_Base {};
	class Inventory_Base;
	
	class MRTsMRE_Powder_Base: Inventory_Base
	{
		scope=0;
		model="\DayZ_AfterZero\data\mres\Liquids\Shake.p3d";
		descriptionShort="Hot beverage powder from an MRE. It would be weird to eat the powder straight... Mix it into some clean water.";
		LiquidTypeToMix=1048576;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=1;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		inventorySlot[]=
		{
			"MRTsMRE1",
			"MRTsMRE2",
			"MRTsMRE3",
			"MRTsMRE4",
			"MRTsMRE5",
			"MRTsMRE6",
			"MRTsMRE7",
			"MRTsMRE8"
		};
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
	
	class MRTsMRE_PowderHotCocoa: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered Hot Cocoa";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\HotCocoa.paa"
		};
	};
	class MRTsMRE_PowderHotCocoaHazelnut: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered Hazelnut Hot Cocoa";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\HotCocoaHazelnut.paa"
		};
	};
	class MRTsMRE_PowderProteinChoco: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered Chocolate Protein Shake";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\ProteinChoco.paa"
		};
	};
	class MRTsMRE_PowderCappuccinoIrishCream: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered Irish Cream Cappuccino";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\CappuccinoIrishCream.paa"
		};
	};
	class MRTsMRE_PowderCappuccinoFrenchVanilla: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered French Vanilla Cappuccino";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\CappuccinoFrenchVanilla.paa"
		};
	};
	class MRTsMRE_PowderCappuccinoMocha: MRTsMRE_Powder_Base
	{
		scope=2;
		displayName="Powdered Mocha Cappuccino";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\CappuccinoMocha.paa"
		};
	};
	class MRTsMRE_PowderTropicalPunch: MRTsMRE_Powder_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Liquids\Beverage.p3d";
		displayName="Powdered Tropical Punch Beverage";
		descriptionShort="Beverage powder from an MRE. It would be weird to eat the powder straight... Mix it into some clean water.";
		LiquidTypeToMix=2097152;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\TropicalPunch.paa"
		};
	};
	class MRTsMRE_PowderFruitPunch: MRTsMRE_PowderTropicalPunch
	{
		scope=2;
		displayName="Powdered Fruit Punch Beverage";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\FruitPunch.paa"
		};
	};
	class MRTsMRE_PowderOrange: MRTsMRE_PowderTropicalPunch
	{
		scope=2;
		displayName="Powdered Orange Beverage";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\Orange.paa"
		};
	};
	class MRTsMRE_PowderLemonLime: MRTsMRE_PowderTropicalPunch
	{
		scope=2;
		displayName="Powdered Lemon-Lime Beverage";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\LemonLime.paa"
		};
	};
	class MRTsMRE_PowderGrape: MRTsMRE_PowderTropicalPunch
	{
		scope=2;
		displayName="Powdered Grape Beverage";
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\mres\Liquids\Data\Grape.paa"
		};
	};
	
	class Canteen: Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class WaterPouch_Natural: WaterPouch_ColorBase
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class WaterBottle: Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Pot: Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
};

class CfgLiquidDefinitions
{
	class MRTsMRE_MreShake
	{
		type=1048576;
		displayName="MRE Shake";
		flammability=0;
		class Nutrition
		{
			fullnessIndex=1;
			energy=20;
			water=30;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_MreBev
	{
		type=2097152;
		displayName="MRE Beverage";
		flammability=0;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
