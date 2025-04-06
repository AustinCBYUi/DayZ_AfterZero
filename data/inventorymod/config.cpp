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
			"DZ_Characters"
		};
	};
};

class CfgVehicles
{
    //Safe Config
    class Clothing;
    class TentBase;
	/**********
     * M65jackets
    **********/
	class M65Jacket_ColorBase: Clothing
	{
		itemSize[]={4,2};
		itemsCargoSize[]={7,8};
	};
	/**********
    * TTsKO Jacket
    **********/
    class TTsKOJacket_ColorBase: Clothing
    {
        itemSize[]={4,2};
        itemsCargoSize[]={7,8};
    };
    /**********
     * GorkaE jackets
     **********/
    class GorkaEJacket_ColorBase: Clothing
    {
        itemSize[]={4,2};
        itemsCargoSize[]={7,8};
    };
    class MediumTent: TentBase
    {
        itemsCargoSize[] = {10,30};
    };
    class LargeTent: TentBase
    {
        itemsCargoSize[] = {10,60};
    };
    class CarScript;
    class Offroad_02: CarScript
    {
        class Cargo
        {
            itemsCargoSize[] = {10,45};
        };
    };
};