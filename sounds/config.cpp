class CfgPatches
{
	class MRTsMREs_Scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Cooking","DZ_Gear_Food"};
	};
};
class CfgSoundSets
{
	class MRTsMREs_SoundSet_Base
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};
	class Open_MRE_SoundSet: MRTsMREs_SoundSet_Base
	{
		soundShaders[] = {"Open_MRE_SoundShader"};
	};
	class Open_MainCourse_SoundSet: MRTsMREs_SoundSet_Base
	{
		soundShaders[] = {"Open_MainCourse_SoundShader"};
	};
	class Open_Ingredient_SoundSet: MRTsMREs_SoundSet_Base
	{
		soundShaders[] = {"Open_Ingredient_SoundShader"};
	};
	class MixMrePowder_SoundSet: MRTsMREs_SoundSet_Base
	{
		soundShaders[] = {"MixMrePowder_SoundShader"};
	};
};
class CfgSoundShaders
{
	class MRTsMREs_SoundShader_Base
	{
		range = 10;
		volume = 4;
	};
	class Open_MRE_SoundShader: MRTsMREs_SoundShader_Base
	{
		samples[] = {{"\DayZ_AfterZero\sounds\Open_MRE.ogg",1}};
	};
	class Open_MainCourse_SoundShader: MRTsMREs_SoundShader_Base
	{
		samples[] = {{"\DayZ_AfterZero\sounds\Open_MainCourse.ogg",1}};
	};
	class Open_Ingredient_SoundShader: MRTsMREs_SoundShader_Base
	{
		samples[] = {{"\DayZ_AfterZero\sounds\Open_Ingredient.ogg",1}};
	};
	class MixMrePowder_SoundShader: MRTsMREs_SoundShader_Base
	{
		samples[] = {{"\DayZ_AfterZero\sounds\MixMrePowder.ogg",1}};
	};
};
