class CfgPatches
{
	class MRTsMREs_Scripts
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
	
	class Inventory_Base;
	class Edible_Base: Inventory_Base
	{
		varTemperatureMax=100;
	};
	
	class MRTsMRE_Ingredient_Base: Inventory_Base
	{
		scope=0;
		model = "";
		hiddenSelections[]=
		{
			"zbytek",
			"Food_Inside"
		};
		itemSize[]={1,2};
		rotationFlags=17;
		weight=10;
		isMeleeWeapon=1;
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
	class MRTsMRE_Ingredient_Open_Base: Edible_Base
	{
		scope=0;
		model="";
		hiddenSelections[]=
		{
			"zbytek",
			"Food_Inside"
		};
		itemSize[]={1,2};
		rotationFlags=17;
		weight=10;
		isMeleeWeapon=1;
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

/// Candy
	class MRTsMRE_MnMs: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Candy\Candy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\M&Ms.paa"
		};
		displayName="M&Ms";
		descriptionShort="Packaged military grade M&Ms, sounds good.";
	};
	class MRTsMRE_MnMs_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Candy\Candy_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\M&Ms.paa",
			"\DayZ_AfterZero\data\mres\Candy\Data\M&Ms_Open.paa"
		};
		displayName="M&Ms";
		descriptionShort="Military grade M&Ms, sounds good.";
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=200;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_MnMsPeanut: MRTsMRE_MnMs
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\M&MsPeanut.paa"
		};
		displayName="Peanut M&Ms";
		descriptionShort="Packaged military grade peanut M&Ms, sounds good.";
	};
	class MRTsMRE_MnMsPeanut_Open: MRTsMRE_MnMs_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\M&MsPeanut.paa",
			"\DayZ_AfterZero\data\mres\Candy\Data\M&MsPeanut_Open.paa"
		};
		displayName="Peanut M&Ms";
		descriptionShort="Military grade peanut M&Ms, sounds good.";
	};
	class MRTsMRE_ReesesPieces: MRTsMRE_MnMs
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\ReesesPieces.paa"
		};
		displayName="Reeses Pieces";
		descriptionShort="Packaged military grade Reeses Pieces, sounds good.";
	};
	class MRTsMRE_ReesesPieces_Open: MRTsMRE_MnMs_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\ReesesPieces.paa",
			"\DayZ_AfterZero\data\mres\Candy\Data\ReesesPieces_Open.paa"
		};
		displayName="Reeses Pieces";
		descriptionShort="Military grade Reeses Pieces, sounds good.";
	};
	class MRTsMRE_Skittles: MRTsMRE_MnMs
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\Skittles.paa"
		};
		displayName="Skittles";
		descriptionShort="Packaged military grade Skittles, sounds good.";
	};
	class MRTsMRE_Skittles_Open: MRTsMRE_MnMs_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\Skittles.paa",
			"\DayZ_AfterZero\data\mres\Candy\Data\Skittles_Open.paa"
		};
		displayName="Skittles";
		descriptionShort="Military grade Skittles, sounds good.";
	};
	class MRTsMRE_SkittlesSour: MRTsMRE_MnMs
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\SkittlesSour.paa"
		};
		displayName="Sour Skittles";
		descriptionShort="Packaged military grade sour Skittles, sounds good.";
	};
	class MRTsMRE_SkittlesSour_Open: MRTsMRE_MnMs_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Candy\Data\SkittlesSour.paa",
			"\DayZ_AfterZero\data\mres\Candy\Data\SkittlesSour_Open.paa"
		};
		displayName="Sour Skittles";
		descriptionShort="Military grade sour Skittles, sounds good.";
	};
};