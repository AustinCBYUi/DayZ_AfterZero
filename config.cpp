class CfgPatches
{
    //Was DZ_Characters_Tops
    class DayZ_AfterZero
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};


class CfgMods
{
	class DayZ_AfterZero
	{
		dir="DayZ_AfterZero";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="DayZ_AfterZero";
		credits="MrTea101";
		author="Aussie Dev/Infrared";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DayZ_AfterZero/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZ_AfterZero/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DayZ_AfterZero/scripts/5_Mission"};
			};
		};
	};
};