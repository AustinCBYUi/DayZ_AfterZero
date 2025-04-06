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
		itemSize[]={2,2};
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
		itemSize[]={2,2};
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
/// Snacks
	class MRTsMRE_Crackers: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Crackers.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Crackers.paa"
		};
		displayName="Crackers";
		descriptionShort="Packaged military grade crackers.. delicious";
	};
	class MRTsMRE_Crackers_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Crackers_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Crackers_Open.paa"
		};
		displayName="Crackers";
		descriptionShort="Military grade crackers.. delicious";
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=150;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_CrackersVegetable: MRTsMRE_Crackers
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Crackers.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\CrackersVegetable.paa"
		};
		displayName="Vegetable Crackers";
		descriptionShort="Packaged military grade vegetable crackers.. delicious";
	};
	class MRTsMRE_CrackersVegetable_Open: MRTsMRE_Crackers_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Crackers_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Crackers_Open.paa"
		};
		displayName="Vegetable Crackers";
		descriptionShort="Military grade vegetable crackers.. delicious";
	};
	class MRTsMRE_CombosPizza: MRTsMRE_Crackers
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\CombosPizza.paa"
		};
		displayName="Pepperoni Pizza Crackers";
		descriptionShort="Packaged military grade pizza combos.. delicious";
	};
	class MRTsMRE_CombosPizza_Open: MRTsMRE_Crackers_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\CombosPizza.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\CombosPizza_Open.paa"
		};
		displayName="Pepperoni Pizza Crackers";
		descriptionShort="Military grade pizza combos.. delicious";
	};
	class MRTsMRE_SnackBread: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\SnackBread.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\SnackBread.paa"
		};
		displayName="Snack Bread";
		descriptionShort="Packaged military grade bread, it's really dense";
	};
	class MRTsMRE_SnackBread_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\SnackBread_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\SnackBread_Open.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"DayZ_AfterZero\data\mres\Snacks\Data\Materials\SnackBread_Open.rvmat"
		};
		displayName="Snack Bread";
		descriptionShort="Military grade bread, it's really dense";
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=300;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_SnackBreadWheat: MRTsMRE_SnackBread
	{
		scope=2;
		displayName="Wheat Snack Bread";
		descriptionShort="Packaged military grade bread, it's really dense";
	};
	class MRTsMRE_SnackBreadWheat_Open: MRTsMRE_SnackBread_Open
	{
		scope=2;
		displayName="Wheat Snack Bread";
		descriptionShort="Military grade bread, it's really dense";
	};
	class MRTsMRE_SnackBreadMulti: MRTsMRE_SnackBread
	{
		scope=2;
		displayName="Multigrain Snack Bread";
		descriptionShort="Packaged military grade multigrain bread, it's really dense";
	};
	class MRTsMRE_SnackBreadMulti_Open: MRTsMRE_SnackBread_Open
	{
		scope=2;
		displayName="Multigrain Snack Bread";
		descriptionShort="Military grade multigrain bread, it's really dense";
	};
	class MRTsMRE_SnackBreadItalian: MRTsMRE_SnackBread
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\SnackBreadItalian.paa"
		};
		displayName="Italian Bread Sticks";
		descriptionShort="Packaged military grade bread sticks, it's really dense";
	};
	class MRTsMRE_SnackBreadItalian_Open: MRTsMRE_SnackBread_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\SnackBreadItalian_Open.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"DayZ_AfterZero\data\mres\Snacks\Data\Materials\SnackBreadItalian_Open.rvmat"
		};
		displayName="Italian Bread Sticks";
		descriptionShort="Military grade bread sticks, it's really dense";
	};
	class MRTsMRE_TortillasPlain: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Tortillas.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TortillasPlain.paa"
		};
		displayName="Plain Tortillas";
		descriptionShort="Packaged military grade tortillas, sounds good.";
	};
	class MRTsMRE_TortillasPlain_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\Tortillas_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TortillasPlain_Open.paa"
		};
		displayName="Plain Tortillas";
		descriptionShort="Military grade tortillas, sounds good.";
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=300;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_TortillasChipotle: MRTsMRE_TortillasPlain
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TortillasChipotle.paa"
		};
		displayName="Chipotle Tortillas";
		descriptionShort="Packaged military grade spicy tortillas, sounds good.";
	};
	class MRTsMRE_TortillasChipotle_Open: MRTsMRE_TortillasPlain_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TortillasChipotle_Open.paa"
		};
		displayName="Chipotle Tortillas";
		descriptionShort="Military grade spicy tortillas, sounds good.";
	};
	class MRTsMRE_EnergyBarChocolate: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\EnergyBar.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarChocolate.paa"
		};
		displayName="Chocolate Energy Bar";
		descriptionShort="Packaged military grade energy bar, should provide a lot of energy. This one's chocolate flavored!";
		itemSize[]={1,2};
	};
	class MRTsMRE_EnergyBarChocolate_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\EnergyBar_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarChocolate.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarChocolate_Open.paa"
		};
		displayName="Chocolate Energy Bar";
		descriptionShort="Military grade energy bar, should provide a lot of energy. This one's chocolate flavored!";
		itemSize[]={1,2};
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=400;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_EnergyBarCranRaspberry: MRTsMRE_EnergyBarChocolate
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarCranRaspberry.paa"
		};
		displayName="Cran-Raspberry Energy Bar";
		descriptionShort="Packaged military grade energy bar, should provide a lot of energy. This one's cran-raspberry flavored!";
	};
	class MRTsMRE_EnergyBarCranRaspberry_Open: MRTsMRE_EnergyBarChocolate_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarCranRaspberry.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarCranRaspberry_Open.paa"
		};
		displayName="Cran-Raspberry Energy Bar";
		descriptionShort="Military grade energy bar, should provide a lot of energy. This one's cran-raspberry flavored!";
	};
	class MRTsMRE_EnergyBarAppleCin: MRTsMRE_EnergyBarChocolate
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarAppleCin.paa"
		};
		displayName="Apple-Cinnamon Energy Bar";
		descriptionShort="Packaged military grade energy bar, should provide a lot of energy. This one's apple-cinnamon flavored!";
	};
	class MRTsMRE_EnergyBarAppleCin_Open: MRTsMRE_EnergyBarChocolate_Open
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarAppleCin.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\EnergyBarAppleCin_Open.paa"
		};
		displayName="Apple-Cinnamon Energy Bar";
		descriptionShort="Military grade energy bar, should provide a lot of energy. This one's apple-cinnamon flavored!";
	};
	class MRTsMRE_FruitsWetPack: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa"
		};
		displayName="Fruit Wet Pack";
		descriptionShort="Packaged military grade fruit wet pack, sounds good.";
	};
	class MRTsMRE_FruitsWetPack_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\FruitsWetPack_Open.paa"
		};
		displayName="Fruit Wet Pack";
		descriptionShort="Military grade fruit wet pack, sounds good.";
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=300;
			water=400;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class MRTsMRE_TrailMixRecovery: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TrailMixRecovery.paa"
		};
		displayName="Trail Mix";
		descriptionShort="Packaged military grade trail mix, sounds good.";
	};
	class MRTsMRE_TrailMixRecovery_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\TrailMixRecovery.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\TrailMixRecovery_Open.paa"
		};
		displayName="Trail Mix";
		descriptionShort="Military grade trail mix, sounds good.";
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
	class MRTsMRE_Raisins: MRTsMRE_TrailMixRecovery
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Raisins.paa"
		};
		displayName="Raisins";
		descriptionShort="Packaged military grade raisins, sounds good.";
	};
	class MRTsMRE_Raisins_Open: MRTsMRE_TrailMixRecovery_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Raisins.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\Raisins_Open.paa"
		};
		displayName="Raisins";
		descriptionShort="Military grade raisins, sounds good.";
	};
	class MRTsMRE_Craisins: MRTsMRE_TrailMixRecovery
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Craisins.paa"
		};
		displayName="Dried Cranberries";
		descriptionShort="Packaged military grade craisins, sounds good.";
	};
	class MRTsMRE_Craisins_Open: MRTsMRE_TrailMixRecovery_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Craisins.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\Craisins_Open.paa"
		};
		displayName="Dried Cranberries";
		descriptionShort="Military grade craisins, sounds good.";
	};
	class MRTsMRE_NutRaisinMix: MRTsMRE_TrailMixRecovery
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\NutRaisinMix.paa"
		};
		displayName="Nut Raisin Mix";
		descriptionShort="Packaged military grade nut, raisin and M&M trail mix, sounds good.";
	};
	class MRTsMRE_NutRaisinMix_Open: MRTsMRE_TrailMixRecovery_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\NutRaisinMix.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\NutRaisinMix_Open.paa"
		};
		displayName="Nut Raisin Mix";
		descriptionShort="Military grade nut, raisin and M&M trail mix, sounds good.";
	};
	class MRTsMRE_Pretzels: MRTsMRE_TrailMixRecovery
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Pretzels.paa"
		};
		displayName="Pretzels";
		descriptionShort="Packaged military grade pretzel sticks, sounds good.";
	};
	class MRTsMRE_Pretzels_Open: MRTsMRE_TrailMixRecovery_Open
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\Snacks\Data\Pretzels.paa",
			"\DayZ_AfterZero\data\mres\Snacks\Data\Pretzels_Open.paa"
		};
		displayName="Pretzels";
		descriptionShort="Military grade pretzel sticks, sounds good.";
	};
	class MRTsMRE_SlimJim: MRTsMRE_Ingredient_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\SlimJim.p3d";
		displayName="Teriyaki Meat Stick";
		descriptionShort="Packaged military grade SlimJim, sounds good.";
		itemSize[]={1,2};
	};
	class MRTsMRE_SlimJim_Open: MRTsMRE_Ingredient_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\Snacks\SlimJim_Open.p3d";
		displayName="Teriyaki Meat Stick";
		descriptionShort="Military grade SlimJim, sounds good.";
		itemSize[]={1,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=200;
			water=80;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

};