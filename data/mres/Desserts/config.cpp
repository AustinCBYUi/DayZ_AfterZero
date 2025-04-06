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
/// Desserts
	class MRTsMRE_Cornbread: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cornbread.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\Cornbread.paa"
		};
		displayName="Cornbread (Transfat Free)";
		descriptionShort="Packaged military grade cornbread, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_Cornbread_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cornbread_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\Cornbread_Open.paa"
		};
		displayName="Cornbread (Transfat Free)";
		descriptionShort="Military grade cornbread, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=350;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_PoundCakeLemon: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cornbread.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\PoundCakeLemon.paa"
		};
		displayName="Lemon Poppy Seed Pound Cake";
		descriptionShort="Packaged military grade pound cake, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_PoundCakeLemon_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cornbread_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\PoundCakeLemon_Open.paa"
		};
		displayName="Lemon Poppy Seed Pound Cake";
		descriptionShort="Military grade pound cake, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=350;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_CookieChocolateChip: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cookie.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\CookieChocolateChip.paa"
		};
		displayName="Chocolate Chip Cookie (Transfat Free)";
		descriptionShort="Packaged military grade chocolate chip cookie, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_CookieChocolateChip_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cookie_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\CookieChocolateChip_Open.paa"
		};
		displayName="Chocolate Chip Cookie (Transfat Free)";
		descriptionShort="Military grade chocolate chip cookie, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=350;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_CookieOatmeal: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cookie.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\CookieOatmeal.paa"
		};
		displayName="Oatmeal Cookie (Transfat Free)";
		descriptionShort="Packaged military grade oatmeal cookie, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_CookieOatmeal_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Cookie_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\CookieOatmeal_Open.paa"
		};
		displayName="Oatmeal Cookie (Transfat Free)";
		descriptionShort="Military grade oatmeal cookie, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=350;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_PoptartBrownSugar: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\PoptartBrownSugar.paa"
		};
		displayName="Brown Sugar Poptart";
		descriptionShort="Packaged military grade poptart, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_PoptartBrownSugar_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Desserts\Poptart_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Desserts\Data\PoptartBrownSugar_Open.paa"
		};
		displayName="Brown Sugar Poptart";
		descriptionShort="Military grade poptart, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=400;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_CobblerCherryBlueberry: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa"
		};
		displayName="Cherry Blueberry Cobbler";
		descriptionShort="Packaged military grade cobbler, sounds good.";
		itemSize[]={2,2};
	};
	class MRTsMRE_CobblerCherryBlueberry_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\Desserts\Data\CobblerCherryBlueberry_Open.paa"
		};
		displayName="Cherry Blueberry Cobbler";
		descriptionShort="Military grade cobbler, sounds good.";
		itemSize[]={2,2};
		varQuantityInit=450;
		varQuantityMin=0;
		varQuantityMax=450;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=500;
			water=300;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	
};