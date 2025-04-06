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
	
	class MRTsMRE_MainCourse_Base: Inventory_Base
	{
		scope=0;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"Food_Inside"
		};
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa"
		};
		rotationFlags=17;
		itemSize[]={2,2};
		weight=45;
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
	class MRTsMRE_MainCourse_Open_Base: Edible_Base
	{
		scope=0;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"Food_Inside"
		};
		rotationFlags=17;
		itemSize[]={2,2};
		weight=45;
		isMeleeWeapon=1;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=450;
			water=300;
			nutritionalIndex=1;
			toxicity=0;
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
	class MRTsMRE_BlackBeans: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Black Beans in a Seasoned Sauce";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_BlackBeans_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Black Beans in a Seasoned Sauce";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainSides\Data\BlackBeans.paa"
		};
	};
	class MRTsMRE_RiceNBeans: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Santa Fe Style Rice and Beans";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_RiceNBeans_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Santa Fe Style Rice and Beans";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainSides\Data\RiceNBeans.paa"
		};
	};
	class MRTsMRE_AllRottenPotatoes: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Potatoes Au Gratin";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_AllRottenPotatoes_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Potatoes Au Gratin";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainSides\Data\AllRottenPotatoes.paa"
		};
	};
	class MRTsMRE_GarlicMashedPotatoes: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Garlic Mashed Potatoes";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_GarlicMashedPotatoes_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Garlic Mashed Potatoes";
		descriptionShort="Side from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainSides\Data\MashedPotatoes.paa"
		};
	};
};