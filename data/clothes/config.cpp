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
			"DZ_Characters",
            "DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Characters_Headgear"
		};
	};
};

class CfgVehicles
{
    /*********************
    * Camo Pack Integration
    **********************/

    class M65Jacket_ColorBase;
	class cargopants_ColorBase;
	class BoonieHat_ColorBase;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class PlateCarrierVest;
	class Mich2001Helmet;
	
	//jackets
	class DZAZ_US4CES_IR: M65Jacket_ColorBase		//Regular Woodland
	{
		displayName="US4CES M65 Jacket";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ces_co.paa"
		};
	};
	class DZAZ_US4CES_Light_IR: M65Jacket_ColorBase	//Light Woodland
	{
		displayName="US4CES Light M65 Jacket";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4ceslw_co.paa"
		};
	};
	class DZAZ_US4CES_Desert_IR: M65Jacket_ColorBase	//Desert
	{
		displayName="US4CES Desert M65 Jacket";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\us4cesds_co.paa"
		};
	};
	class DZAZ_Vegetato_IR: M65Jacket_ColorBase	//Vegetato
	{
		displayName="Vegetato M65 Jacket";
		descriptionShort="Modern Italian Camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\vege_co.paa"
		};
	};
	class DZAZ_DesertNight_IR: M65Jacket_ColorBase	//Desert Night
	{
		displayName="Desert Night M65 Jacket";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\desertnight_co.paa"
		};
	};
	class DZAZ_DarkMulti_IR: M65Jacket_ColorBase	//Dark Multicam
	{
		displayName="Dark Multicam M65 Jacket";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\darkmulti_co.paa"
		};
	};
	class DZAZ_NWUII_IR: M65Jacket_ColorBase	//NWU T II
	{
		displayName="NWU Type II M65 Jacket";
		descriptionShort="Camouflage pattern used by US Navy prior to 2019";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\nwu_co.paa"
		};
	};
	class DZAZ_AOR1_IR: M65Jacket_ColorBase	//NWU T I
	{
		displayName="AOR1 M65 Jacket";
		descriptionShort="Camouflage pattern used by US Navy Special Warfare";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\aor1_co.paa"
		};
	};
	class DZAZ_AOR2_IR: M65Jacket_ColorBase	//NWU T III
	{
		displayName="AOR2 M65 Jacket";
		descriptionShort="Camouflage pattern used by US Navy personnel, and Special Warfare starting 2017";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\aor2_co.paa"
		};
	};
	class DZAZ_DCU_IR: M65Jacket_ColorBase	//DCU
	{
		displayName="DCU M65 Jacket";
		descriptionShort="Camouflage pattern used by various countries, primarily the US during Operation Desert Storm";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\dcu_co.paa"
		};
	};
	//Added 02/08/2024
	class DZAZ_MULTICAM_IR: M65Jacket_ColorBase
	{
		displayName="Multicam M65 Jacket";
		descriptionShort="Modern camouflage pattern that is used by various countries. Primarily in use by the United States and allies.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Jackets\multicam_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\multicam_co.paa",
			"DayZ_AfterZero\data\clothes\data\Jackets\multicam_co.paa"
		};
	};
	//-------------------END OF jackets-------------------//
	
	
	
	//Cargo Pants
	class DZAZ_Cargo_US4CES_IR: CargoPants_ColorBase		//Regular Woodland
	{
		displayName="US4CES Cargo Pants";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ces_co.paa"
		};
	};
	class DZAZ_Cargo_US4CES_Light_IR: CargoPants_ColorBase	//Light Woodland
	{
		displayName="US4CES Light Cargo Pants";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4ceslw_co.paa"
		};
	};
	class DZAZ_Cargo_US4CES_Desert_IR: CargoPants_ColorBase	//Desert
	{
		displayName="US4CES Desert Cargo Pants";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_us4cesds_co.paa"
		};
	};
	class DZAZ_Cargo_Vegetato_IR: CargoPants_ColorBase	//Vegetato
	{
		displayName="Vegetato Cargo Pants";
		descriptionShort="Modern Italian Camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_vege_co.paa"
		};
	};
	class DZAZ_Cargo_DesertNight_IR: CargoPants_ColorBase	//Desert Night
	{
		displayName="Desert Night Cargo Pants";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_desertnight_co.paa"
		};
	};
	class DZAZ_Cargo_DarkMulti_IR: CargoPants_ColorBase	//Dark Multicam
	{
		displayName="Dark Multicam Cargo Pants";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_darkmulti_co.paa"
		};
	};
	class DZAZ_Cargo_NWU_IR: CargoPants_ColorBase	//NWU T II
	{
		displayName="NWU Type II Cargo Pants";
		descriptionShort="Camouflage pattern used by US Navy prior to 2019";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_nwu_co.paa"
		};
	};
	class DZAZ_Cargo_AOR1_IR: CargoPants_ColorBase	//NWU T I
	{
		displayName="AOR1 Cargo Pants";
		descriptionShort="Camouflage pattern used by US Navy Special Warfare";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor1_co.paa"
		};
	};
	class DZAZ_Cargo_AOR2_IR: CargoPants_ColorBase	//NWU T III
	{
		displayName="AOR2 Cargo Pants";
		descriptionShort="Camouflage pattern used by US Navy personnel, and Special Warfare starting 2017";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_aor2_co.paa"
		};
	};
	class DZAZ_Cargo_DCU_IR: CargoPants_ColorBase	//DCU
	{
		displayName="DCU Cargo Pants";
		descriptionShort="Camouflage pattern used by various countries, primarily the US during Operation Desert Storm";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_dcu_co.paa"
		};
	};
	//Added 02/08/2024
	class DZAZ_Cargo_Multicam: CargoPants_ColorBase //Multicam
	{
		displayName="Multicam Cargo Pants";
		descriptionShort="Modern camouflage pattern that is used by various countries. Primarily in use by the United States and allies.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_multicam_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_multicam_co.paa",
			"DayZ_AfterZero\data\clothes\data\CargoPants\cargopants_multicam_co.paa"
		};
	};
	//-------------------END OF CARGO PANTS-------------------//
	
	
	
		//Cargo Pants
	class DZAZ_Boonie_US4CES_IR: BoonieHat_ColorBase	//Regular Woodland
	{
		displayName="US4CES Boonie Hat";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ces_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ces_co.paa"
		};
	};
	class DZAZ_Boonie_US4CES_Light_IR: BoonieHat_ColorBase	//Light Woodland
	{
		displayName="US4CES Light Boonie Hat";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ceslw_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4ceslw_co.paa"
		};
	};
	class DZAZ_Boonie_US4CES_Desert_IR: BoonieHat_ColorBase	//Desert
	{
		displayName="US4CES Light Boonie Hat";
		descriptionShort="An experimental camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4cesds_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_us4cesds_co.paa"
		};
	};
	class DZAZ_Boonie_Vegetato_IR: BoonieHat_ColorBase	//Vegetato
	{
		displayName="Vegetato Boonie Hat";
		descriptionShort="Modern Italian Camouflage";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_vege_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_vege_co.paa"
		};
	};
	class DZAZ_Boonie_DesertNight_IR: BoonieHat_ColorBase	//Desert Night
	{
		displayName="Desert Night Boonie Hat";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_desertnight_co.paa"
		};
	};
	class DZAZ_Boonie_DarkMulti_IR: BoonieHat_ColorBase	//Dark Multi
	{
		displayName="Dark Multicam Boonie Hat";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_darkmulti_co.paa"
		};
	};
	class DZAZ_Boonie_NWU_IR: BoonieHat_ColorBase	//NWU T II
	{
		displayName="NWU Type II Boonie Hat";
		descriptionShort="Camouflage pattern used by US Navy prior to 2019";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_nwu_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_nwu_co.paa"
		};
	};
	class DZAZ_Boonie_AOR1_IR: BoonieHat_ColorBase	//NWU T I
	{
		displayName="AOR1 Boonie Hat";
		descriptionShort="Camouflage pattern used by US Navy Special Warfare";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor1_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor1_co.paa"
		};
	};
	class DZAZ_Boonie_AOR2_IR: BoonieHat_ColorBase	//NWU T III
	{
		displayName="AOR2 Boonie Hat";
		descriptionShort="Camouflage pattern used by US Navy personnel, and Special Warfare starting 2017";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor2_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_aor2_co.paa"
		};
	};
	class DZAZ_Boonie_DCU_IR: BoonieHat_ColorBase	//DCU
	{
		displayName="DCU Boonie Hat";
		descriptionShort="Camouflage pattern used by various countries, primarily the US during Operation Desert Storm";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_dcu_co.paa",
			"DayZ_AfterZero\data\clothes\data\BoonieHat\booniehat_dcu_co.paa"
		};
	};
	//-------------------END OF BOONIE HAT-------------------//
	
	
	
	//-------------------start of vests-------------------//
	
	//vests
	class DZAZ_Vest_DesertNight_IR: PlateCarrierVest		//Desert Night
	{
		displayName="Desert Night Plate Carrier";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		color="Desert Night";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa"
		};
	};
	class DZAZ_Vest_DarkMulti_IR: PlateCarrierVest		//Dark Multicam
	{
		displayName="Dark Multicam Plate Carrier";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		color="Dark Multicam";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa"
		};
	};
	//-------------------END OF vests-------------------//
	
	
	
	//Plate Carrier Holster
	class DZAZ_PlateCarrierHolster_DesertNight_IR: PlateCarrierHolster		//Desert Night
	{
		displayName="Desert Night Plate Carrier Holster";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa"
		};
	};
	class DZAZ_PlateCarrierHolster_DarkMulti_IR: PlateCarrierHolster		//DarkMulticam
	{
		displayName="Dark Multicam Plate Carrier Holster";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa"
		};
	};
	//-------------------END OF PLATE CARRIER HOLSTERS-------------------//
	
	
	
	//Plate Carrier Pouches
	class DZAZ_PlateCarrierPouches_DesertNight_IR: PlateCarrierPouches		//DarkMulticam
	{
		displayName="Desert Night Plate Carrier Pouches";
		descriptionShort="Camouflage pattern developed by United States in 1976";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_desertnight_co.paa"
		};
	};
	class DZAZ_PlateCarrierPouches_DarkMulti_IR: PlateCarrierPouches		//DarkMulticam
	{
		displayName="Dark Multicam Plate Carrier Pouches";
		descriptionShort="Camouflage pattern intended for night time operations";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa",
			"DayZ_AfterZero\data\clothes\data\Vests\ballisticvest_darkmulti_co.paa"
		};
	};
	//-------------------END OF PLATE CARRIER POUCHES-------------------//
};