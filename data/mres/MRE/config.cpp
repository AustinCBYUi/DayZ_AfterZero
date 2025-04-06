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

class CfgSlots
{
	class Slot_Ingredient;
	class Slot_MRTsMRE1: Slot_Ingredient { name="MRTsMRE1"; displayName="MRE Item"; };
	class Slot_MRTsMRE2: Slot_Ingredient { name="MRTsMRE2"; displayName="MRE Item"; };
	class Slot_MRTsMRE3: Slot_Ingredient { name="MRTsMRE3"; displayName="MRE Item"; };
	class Slot_MRTsMRE4: Slot_Ingredient { name="MRTsMRE4"; displayName="MRE Item"; };
	class Slot_MRTsMRE5: Slot_Ingredient { name="MRTsMRE5"; displayName="MRE Item"; };
	class Slot_MRTsMRE6: Slot_Ingredient { name="MRTsMRE6"; displayName="MRE Item"; };
	class Slot_MRTsMRE7: Slot_Ingredient { name="MRTsMRE7"; displayName="MRE Item"; };
	class Slot_MRTsMRE8: Slot_Ingredient { name="MRTsMRE8"; displayName="MRE Item"; };
	
};

class CfgVehicles
{
	class Inventory_Base;
	
/// MRE
	class MRTsMRE_Base: Inventory_Base
	{
		scope=0;
		model="";
		rotationFlags=17;
		itemSize[]={2,3};
		weight=45;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
	};
	
	
	class MRTsMRE_Open_Base: Inventory_Base
	{
		scope=0;
		model="";
		rotationFlags=17;
		itemSize[]={2,3};
		weight=45;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		attachments[]=
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
	};

	class MRTsMRE_Menu1: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu1.paa"
		};
		displayName="Menu 1 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chili with Beans. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu1_MainCourse",
			"MRTsMRE_CombosPizza",
			"MRTsMRE_Crackers",
			"MRTsMRE_Cornbread",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu2: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu2.paa"
		};
		displayName="Menu 2 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Shredded in BBQ Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu2_MainCourse",
			"MRTsMRE_BlackBeans",
			"MRTsMRE_Tortillas",
			"MRTsMRE_Cookie",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_BbqSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu3: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu3.paa"
		};
		displayName="Menu 3 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken, Noodles and Vegetables in Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu3_MainCourse",
			"MRTsMRE_FruitsWetPack",
			"MRTsMRE_Candy",
			"MRTsMRE_Crackers",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_Jam",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu4: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu4.paa"
		};
		displayName="Menu 4 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Spaghetti with Beef and Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu4_MainCourse",
			"MRTsMRE_PoptartBrownSugar",
			"MRTsMRE_Raisins",
			"MRTsMRE_SnackBread",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_Jam",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu5: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu5.paa"
		};
		displayName="Menu 5 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken Chunks. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu5_MainCourse",
			"MRTsMRE_TrailMixRecovery",
			"MRTsMRE_Tortillas",
			"MRTsMRE_EnergyBar",
			"MRTsMRE_Candy",
			"MRTsMRE_BuffaloSauce",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu6: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu6.paa"
		};
		displayName="Menu 6 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Taco. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu6_MainCourse",
			"MRTsMRE_RiceNBeans",
			"MRTsMRE_NutRaisinMix",
			"MRTsMRE_Tortillas",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu7: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu7.paa"
		};
		displayName="Menu 7 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Brisket Entree. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu7_MainCourse",
			"MRTsMRE_AllRottenPotatoes",
			"MRTsMRE_Craisins",
			"MRTsMRE_Candy",
			"MRTsMRE_SnackBread",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_Jam",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu8: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu8.paa"
		};
		displayName="Menu 8 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Meatballs in Marinara Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu8_MainCourse",
			"MRTsMRE_MashedPotatoes",
			"MRTsMRE_SnackBreadItalian",
			"MRTsMRE_Cookie",
			"MRTsMRE_SlimJim",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu9: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu9.paa"
		};
		displayName="Menu 9 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Stew. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu9_MainCourse",
			"MRTsMRE_Pretzels",
			"MRTsMRE_PoundCake",
			"MRTsMRE_SnackBread",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_Jam",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu10: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu10.paa"
		};
		displayName="Menu 10 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chili and Macaroni. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu10_MainCourse",
			"MRTsMRE_CobblerCherryBlueberry",
			"MRTsMRE_SnackBreadItalian",
			"MRTsMRE_Cookie",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu11: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu11.paa"
		};
		displayName="Menu 11 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Vegetable Crumbles w/Pasta in Taco Style Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu11_MainCourse",
			"MRTsMRE_FruitsWetPack",
			"MRTsMRE_TrailMixRecovery", //"MRTsMRE_Nuts"
			"MRTsMRE_EnergyBar",
			"MRTsMRE_Crackers",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_HotSauce", //"MRTsMRE_Chili&LimeSauce"
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu12: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu12.paa"
		};
		displayName="Menu 12 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Elbow Macaroni in Tomato Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu12_MainCourse",
			"MRTsMRE_FruitsWetPack",
			"MRTsMRE_Candy",
			"MRTsMRE_SnackBread",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu13: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu13.paa"
		};
		displayName="Menu 13 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Cheese Tortellini in Tomato Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu13_MainCourse",
			"MRTsMRE_TrailMixRecovery",
			"MRTsMRE_Crackers",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu14: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu14.paa"
		};
		displayName="Menu 14 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Creamy Spinach Fettuccine. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu14_MainCourse",
			"MRTsMRE_Pretzels",
			"MRTsMRE_EnergyBar",
			"MRTsMRE_Crackers",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu15: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu15.paa"
		};
		displayName="Menu 15 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Mexican Style Chicken Stew. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu15_MainCourse",
			"MRTsMRE_FruitsWetPack",
			"MRTsMRE_CombosPizza", //"MRTsMRE_CombosPretzel"
			"MRTsMRE_EnergyBar",
			"MRTsMRE_Crackers",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu16: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu16.paa"
		};
		displayName="Menu 16 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken Burrito Bowl. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu16_MainCourse",
			"MRTsMRE_TrailMixRecovery", //"MRTsMRE_CornNuts"
			"MRTsMRE_Tortillas",
			"MRTsMRE_PoundCake", //"MRTsMRE_FilledBakeryItem_AppleTurnover",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu17: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu17.paa"
		};
		displayName="Menu 17 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Maple Pork Sausage Patty. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu17_MainCourse",
			"MRTsMRE_TrailMixRecovery", //"MRTsMRE_Nuts"
			"MRTsMRE_PoundCake", //"MRTsMRE_MapleMuffinTopTFF"
			"MRTsMRE_Crackers",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_TableSyrup",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu18: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu18.paa"
		};
		displayName="Menu 18 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Ravioli in Meat Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu18_MainCourse",
			"MRTsMRE_PoundCake", //"MRTsMRE_ChocolateBananaNutMuffinTopTFF"
			"MRTsMRE_SlimJim",
			"MRTsMRE_SnackBread",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_HotSauce",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu19: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu19.paa"
		};
		displayName="Menu 19 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Patty, Grilled, Jalapeno Pepper Jack. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu19_MainCourse",
			"MRTsMRE_CobblerCherryBlueberry",
			"MRTsMRE_Tortillas",
			"MRTsMRE_Cookie",
			"MRTsMRE_Candy",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu20: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu20.paa"
		};
		displayName="Menu 20 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Hash Brown Potatoes w/Bacon, Peppers and Onions. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu20_MainCourse",
			"MRTsMRE_TrailMixRecovery", //"MRTsMRE_Nuts"
			"MRTsMRE_Cornbread", //"MRTsMRE_GranolawithMilkandBlueberries"
			"MRTsMRE_PoundCake", //"MRTsMRE_FilledBakeryItem"
			"MRTsMRE_Crackers",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
		};
	};
	class MRTsMRE_Menu21: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu21.paa"
		};
		displayName="Menu 21 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Lemon Pepper Tuna. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu21_MainCourse",
			"MRTsMRE_PoundCake",
			"MRTsMRE_Tortillas",
			"MRTsMRE_TrailMixRecovery", //"MRTsMRE_CornNuts"
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderBeverage"
			//"MRTsMRE_Mayonnaise"
		};
	};
	class MRTsMRE_Menu22: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu22.paa"
		};
		displayName="Menu 22 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Asian Style Beef Strips with Vegetables. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu21_MainCourse",
			"MRTsMRE_FruitsWetPack",
			"MRTsMRE_Cookie",
			"MRTsMRE_SnackBread",
			"MRTsMRE_PeanutButter",
			"MRTsMRE_Jam",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu23: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu23.paa"
		};
		displayName="Menu 23 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Pepperoni Pizza Slice. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu23_MainCourse",
			"MRTsMRE_CobblerCherryBlueberry",
			"MRTsMRE_Cookie",
			"MRTsMRE_SnackBreadItalian",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderShake"
		};
	};
	class MRTsMRE_Menu24: MRTsMRE_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu24.paa"
		};
		displayName="Menu 24 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Southwest Style Beef and Black Beans with Sauce. Well.. could be worse...";
		Menu_Contents[]=
		{
			"MRTsMRE_Menu24_MainCourse",
			"MRTsMRE_Tortillas",
			"MRTsMRE_PoundCake",
			"MRTsMRE_Cookie", // Apple Pieces in Spiced Sauce
			"MRTsMRE_SlimJim",
			"MRTsMRE_CheeseSpread",
			"MRTsMRE_PowderShake"
		};
	};


	class MRTsMRE_Menu1_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu1.paa"
		};
		displayName="Menu 1 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chili with Beans. Well.. could be worse...";
	};
	class MRTsMRE_Menu2_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu2.paa"
		};
		displayName="Menu 2 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Shredded in BBQ Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu3_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu3.paa"
		};
		displayName="Menu 3 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken, Noodles and Vegetables in Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu4_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu4.paa"
		};
		displayName="Menu 4 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Spaghetti with Beef and Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu5_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu5.paa"
		};
		displayName="Menu 5 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken Chunks. Well.. could be worse...";
	};
	class MRTsMRE_Menu6_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu6.paa"
		};
		displayName="Menu 6 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Taco. Well.. could be worse...";
	};
	class MRTsMRE_Menu7_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu7.paa"
		};
		displayName="Menu 7 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Brisket Entree. Well.. could be worse...";
	};
	class MRTsMRE_Menu8_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu8.paa"
		};
		displayName="Menu 8 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Meatballs in Marinara Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu9_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu9.paa"
		};
		displayName="Menu 9 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Stew. Well.. could be worse...";
	};
	class MRTsMRE_Menu10_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu10.paa"
		};
		displayName="Menu 10 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chili and Macaroni. Well.. could be worse...";
	};
	class MRTsMRE_Menu11_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu11.paa"
		};
		displayName="Menu 11 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Vegetable Crumbles w/Pasta in Taco Style Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu12_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu12.paa"
		};
		displayName="Menu 12 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Elbow Macaroni in Tomato Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu13_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu13.paa"
		};
		displayName="Menu 13 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Cheese Tortellini in Tomato Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu14_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu14.paa"
		};
		displayName="Menu 14 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Creamy Spinach Fettuccine. Well.. could be worse...";
	};
	class MRTsMRE_Menu15_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu15.paa"
		};
		displayName="Menu 15 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Mexican Style Chicken Stew. Well.. could be worse...";
	};
	class MRTsMRE_Menu16_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu16.paa"
		};
		displayName="Menu 16 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Chicken Burrito Bowl. Well.. could be worse...";
	};
	class MRTsMRE_Menu17_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu17.paa"
		};
		displayName="Menu 17 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Maple Pork Sausage Patty. Well.. could be worse...";
	};
	class MRTsMRE_Menu18_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu18.paa"
		};
		displayName="Menu 18 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Ravioli in Meat Sauce. Well.. could be worse...";
	};
	class MRTsMRE_Menu19_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu19.paa"
		};
		displayName="Menu 18 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Beef Patty, Grilled, Jalapeno Pepper Jack. Well.. could be worse...";
	};
	class MRTsMRE_Menu20_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu20.paa"
		};
		displayName="Menu 20 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Hash Brown Potatoes w/Bacon, Peppers and Onions. Well.. could be worse...";
	};
	class MRTsMRE_Menu21_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu21.paa"
		};
		displayName="Menu 21 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Lemon Pepper Tuna. Well.. could be worse...";
	};
	class MRTsMRE_Menu22_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase1_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu22.paa"
		};
		displayName="Menu 22 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Asian Style Beef Strips with Vegetables. Well.. could be worse...";
	};
	class MRTsMRE_Menu23_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase2_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu23.paa"
		};
		displayName="Menu 23 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Pepperoni Pizza Slice. Well.. could be worse...";
	};
	class MRTsMRE_Menu24_Open: MRTsMRE_Open_Base
	{
		scope=2;
		model="\DayZ_AfterZero\data\mres\MRE\MenuBase3_Open.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DayZ_AfterZero\data\mres\MRE\Data\Menu24.paa"
		};
		displayName="Menu 24 MRE";
		descriptionShort="Meal-Ready-to-Eat! A self-contained, individual field ration in lightweight packaging. Usually bought by the US Department of Defense for its service members for use in conditions where organized food facilities are not available. This MRE's main course seems to be Southwest Style Beef and Black Beans with Sauce. Well.. could be worse...";
	};

};