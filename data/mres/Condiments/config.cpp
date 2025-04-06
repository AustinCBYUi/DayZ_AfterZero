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

/// Condiments
	class MRTsMRE_CheeseSpread: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Condiments\CheeseSpread.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpread.paa"
		};
		displayName="Cheese Spread";
		descriptionShort="Packaged military grade cheese spread, sounds good.";
		itemSize[]={1,1};
	};
	class MRTsMRE_CheeseSpread_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Condiments\CheeseSpread_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpread.paa",
			"#(argb,8,8,3)color(0.854902,0.67451,0.054902,1.0,co)"
		};
		displayName="Cheese Spread";
		descriptionShort="Military grade cheese spread, sounds good.";
		itemSize[]={1,1};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=100;
			water=30;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_CheeseSpreadJalapeno: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpreadJalapeno.paa"
		};
		displayName="Jalapeno Cheese Spread";
		descriptionShort="Packaged military grade jalapeno cheese spread, sounds good.";
	};
	class MRTsMRE_CheeseSpreadJalapeno_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpreadJalapeno.paa",
			"#(argb,8,8,3)color(0.678431,0.537255,0.0470588,1.0,co)"
		};
		displayName="Jalapeno Cheese Spread";
		descriptionShort="Military grade jalapeno cheese spread, sounds good.";
	};
	class MRTsMRE_CheeseSpreadWithBacon: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpreadWithBacon.paa"
		};
		displayName="Bacon Cheese Spread";
		descriptionShort="Packaged military grade bacon cheese spread, sounds good.";
	};
	class MRTsMRE_CheeseSpreadWithBacon_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\CheeseSpreadWithBacon.paa",
			"#(argb,8,8,3)color(0.678431,0.537255,0.0470588,1.0,co)"
		};
		displayName="Bacon Cheese Spread";
		descriptionShort="Military grade bacon cheese spread, sounds good.";
	};
	class MRTsMRE_BbqSauce: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\BbqSauce.paa"
		};
		displayName="BBQ Sauce";
		descriptionShort="Packaged military grade barbeque sauce, sounds good.";
	};
	class MRTsMRE_BbqSauce_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\BbqSauce.paa",
			"#(argb,8,8,3)color(0.239216,0.0627451,0.00392157,1.0,co)"
		};
		displayName="Jalapeno Cheese Spread";
		descriptionShort="Military grade barbeque sauce, sounds good.";
	};
	class MRTsMRE_HotSauce: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\HotSauce.paa"
		};
		displayName="Hot Sauce";
		descriptionShort="Packaged military grade hot sauce, sounds good.";
	};
	class MRTsMRE_HotSauce_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\HotSauce.paa",
			"#(argb,8,8,3)color(0.709804,0.0862745,0.0156863,1.0,co)"
		};
		displayName="Hot Sauce";
		descriptionShort="Military grade hot sauce, sounds good.";
	};
	class MRTsMRE_BuffaloSauce: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\BuffaloSauce.paa"
		};
		displayName="Buffalo Style Hot Sauce";
		descriptionShort="Packaged military grade buffalo sauce, sounds good.";
	};
	class MRTsMRE_BuffaloSauce_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\BuffaloSauce.paa",
			"#(argb,8,8,3)color(0.709804,0.0862745,0.0156863,1.0,co)"
		};
		displayName="Buffalo Style Hot Sauce";
		descriptionShort="Military grade buffalo sauce, sounds good.";
	};
	class MRTsMRE_PeanutButter: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\PeanutButter.paa"
		};
		displayName="Peanut Butter";
		descriptionShort="Packaged military grade peanut butter, sounds good.";
	};
	class MRTsMRE_PeanutButter_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\PeanutButter.paa",
			"#(argb,8,8,3)color(0.772549,0.533333,0.0941176,1.0,co)"
		};
		displayName="Peanut Butter";
		descriptionShort="Military grade peanut butter, sounds good.";
	};
	class MRTsMRE_PeanutButterChunky: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\PeanutButterChunky.paa"
		};
		displayName="Chunky Peanut Butter";
		descriptionShort="Packaged military grade chunky peanut butter, sounds good.";
	};
	class MRTsMRE_PeanutButterChunky_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\PeanutButterChunky.paa",
			"#(argb,8,8,3)color(0.772549,0.533333,0.0941176,1.0,co)"
		};
		displayName="Chunky Peanut Butter";
		descriptionShort="Military grade chunky peanut butter, sounds good.";
	};
	class MRTsMRE_JamApple: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamApple.paa"
		};
		displayName="Apple Jelly";
		descriptionShort="Packaged military grade apple jelly, sounds good.";
	};
	class MRTsMRE_JamApple_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamApple.paa",
			"#(argb,8,8,3)color(0.482353,0.333333,0.0588235,1.0,co)"
		};
		displayName="Apple Jelly";
		descriptionShort="Military grade apple jelly, sounds good.";
	};
	class MRTsMRE_JamStrawberry: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamStrawberry.paa"
		};
		displayName="Strawberry Jam";
		descriptionShort="Packaged military grade strawberry jam, sounds good.";
	};
	class MRTsMRE_JamStrawberry_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamStrawberry.paa",
			"#(argb,8,8,3)color(0.333333,0,0,1.0,co)"
		};
		displayName="Strawberry Jam";
		descriptionShort="Military grade strawberry jam, sounds good.";
	};
	class MRTsMRE_JamGrape: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamGrape.paa"
		};
		displayName="Grape Jam";
		descriptionShort="Packaged military grade grape jelly, sounds good.";
	};
	class MRTsMRE_JamGrape_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\JamGrape.paa",
			"#(argb,8,8,3)color(0.160784,0,0.32549,1.0,co)"
		};
		displayName="Grape Jelly";
		descriptionShort="Military grade grape jelly, sounds good.";
	};
	class MRTsMRE_TableSyrup: MRTsMRE_CheeseSpread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\TableSyrup.paa"
		};
		displayName="Table Syrup";
		descriptionShort="Packaged military table syrup, sounds good.";
	};
	class MRTsMRE_TableSyrup_Open: MRTsMRE_CheeseSpread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Condiments\Data\TableSyrup.paa",
			"#(argb,8,8,3)color(0.337255,0.172549,0.172549,1.0,co)"
		};
		displayName="Table Syrup";
		descriptionShort="Military grade table syrup, sounds good.";
	};
};