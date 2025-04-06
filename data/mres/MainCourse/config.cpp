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
	
/// MainCourse
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
		varQuantityInit=450;
		varQuantityMin=0;
		varQuantityMax=450;
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=650;
			water=400;
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

	class MRTsMRE_Menu1_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Chili with Beans";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu2_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Beef Shredded in BBQ Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu3_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Base.p3d";
		displayName="Chicken, Noodles, and Vegetables in Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu4_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Spaghetti with Beef and Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu5_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Chicken Chunks";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu6_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Beef Taco";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu7_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Brisket Entree";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu8_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Meatballs in Marinara Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu9_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Beef Stew";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu10_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Chili and Macaroni";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu11_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Vegetable Crumbles w/Pasta in Taco Style Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu12_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Elbow Macaroni in Tomato Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu13_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Cheese Tortellini in Tomato Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu14_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Creamy Spinach Fettuccine";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu15_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Mexican Style Chicken Stew";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu16_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Chicken Burrito Bowl";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu17_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Maple Pork Sausage Patty";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu18_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Beef Ravioli in Meat Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu19_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Beef Patty, Grilled, Jalapeno Pepper Jack";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu20_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Hash Brown Potatoes w/Bacon, Peppers and Onions";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu21_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Lemon Pepper Tuna";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu21_MainCourse_zbytek.paa"
		};
	};
	class MRTsMRE_Menu22_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Asian Style Beef Strips with Vegetables";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	class MRTsMRE_Menu23_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Pepperoni Pizza Slice";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Base.p3d";
	};
	class MRTsMRE_Menu24_MainCourse: MRTsMRE_MainCourse_Base
	{
		scope=2;
		displayName="Southwest Style Beef and Black Beans with Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
	};
	
	class MRTsMRE_Menu1_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Chili with Beans";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu1_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu2_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Beef Shredded in BBQ Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu2_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu3_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Chicken, Noodles, and Vegetables in Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu3_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu4_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Spaghetti with Beef and Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu4_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu5_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Chicken Chunks";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu5_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu6_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Beef Taco";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu6_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu7_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Brisket Entree";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu7_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu8_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Meatballs in Marinara Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu8_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu9_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Beef Stew";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu9_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu10_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Chili and Macaroni";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu10_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu11_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Vegetable Crumbles w/Pasta in Taco Style Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu11_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu12_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Elbow Macaroni in Tomato Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu12_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu13_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Cheese Tortellini in Tomato Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu13_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu14_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Creamy Spinach Fettuccine";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu14_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu15_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Mexican Style Chicken Stew";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu15_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu16_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Chicken Burrito Bowl";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu16_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu17_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\Meat_Brick.p3d";
		displayName="Maple Pork Sausage Patty";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu17_MainCourse.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu17_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu18_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Beef Ravioli in Meat Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu18_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu19_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MainCourse\Meat_Brick.p3d";
		displayName="Beef Patty, Grilled, Jalapeno Pepper Jack";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu19_MainCourse.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu19_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu20_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Hash Brown Potatoes w/Bacon, Peppers and Onions";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu20_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu21_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Lemon Pepper Tuna";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu21_MainCourse_zbytek.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu21_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu22_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Asian Style Beef Strips with Vegetables";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\MainCourse2_Open_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu22_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu23_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Pepperoni Pizza Slice";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		model="\DayZ_AfterZero\data\mres\MainCourse\Meat_Brick.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu23_MainCourse_Back.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu23_MainCourse.paa"
		};
	};
	class MRTsMRE_Menu24_MainCourse_Open: MRTsMRE_MainCourse_Open_Base
	{
		scope=2;
		displayName="Southwest Style Beef and Black Beans with Sauce";
		descriptionShort="Main course from an MRE! It's probably really filling, looks... good...";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MainCourse\Data\MainCourse_Base.paa",
			"\DayZ_AfterZero\data\mres\MainCourse\Data\Menu24_MainCourse.paa"
		};
	};
};
	