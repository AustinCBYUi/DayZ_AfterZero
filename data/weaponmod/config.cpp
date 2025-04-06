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
            "DZ_Weapons_Firearms_AKM",
            "DZ_Weapons_Firearms"
		};
	};
};

class CfgVehicles
{
    /****************
     * Suppressor Modifications
    *
    */
    class Inventory_Base;
    class ItemSuppressor: Inventory_Base
    {
        barrelArmor=6000; //Default was 3000 I think
    };
    class ImprovisedSuppressor: ItemSuppressor
    {
        barrelArmor=1750; //Default is 600
    };
    class M4_Suppressor: ItemSuppressor
    {
        barrelArmor=4500; //2250 is default
    };
    class AK_Suppressor: ItemSuppressor
    {
        barrelArmor=4500; //2250 is default
    };
    class PistolSuppressor: ItemSuppressor
    {
        barrelArmor=2000; //600 is default
    };
};

//===========================================//
// Admin AKM Rifle
//===========================================//
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
    class AKM_Base;
    //Was using Rifle base for the admin base, but I think it should be AKM_Base?
    class DZAZ_Admin_AKM_BASE: AKM_Base
    {
        scope = 0;
		weight = 2140;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
		WeaponLength = 0.9;
		barrelArmor = 45.000;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		magazines[] = {"DZAZ_Admin_AKM_DrumMag400"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto","FullAuto"};
        class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0,0,0.1};
				orientation[] = {0,45,0};
			};
			class Melee
			{
				position[] = {0,0,-0.1};
				orientation[] = {0,-45,0};
			};
		};
		weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
    };
    class DZAZ_Admin_AKM: DZAZ_Admin_AKM_BASE
    {
        scope = 2;
        displayName = "Admin AKM";
        descriptionShort = "Admin AKM Rifle";
        model = "\dz\weapons\firearms\AKM\AKM.p3d";
        attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponWrap","weaponOpticsAK","weaponFlashlight","weaponMuzzleAK","weaponBayonetAK"};
		itemSize[] = {8,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AKM\data\akm_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AKM\data\AKM.rvmat"};
        class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 12;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 0.7;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.7};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.7,1.0};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.7,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.5,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"}}};
				};
			};
		};
    };

	//Rifle Modifiers
	class Rifle_Base;
	class AK74_Base: Rifle_Base
	{
		barrelArmor = 3.5; //Default: 2.743
	};
	class AK101_Base: Rifle_Base
	{
		barrelArmor = 2.200; //Default: 1.806
	};
	// class AKM_Base: Rifle_Base
	// {
	// 	barrelArmor = 5.0; //Default: 4.444
	// };
	class Aug_Base: Rifle_Base
	{
		barrelArmor = 3.4; //2.3 Default
	};
	class CZ61_Base: Rifle_Base
	{
		barrelArmor = 2.5; //Default: 1.9
	};
	class FAL_Base: Rifle_Base
	{
		barrelArmor = 3.0; //Default 2.2
	};
	class Famas_Base: Rifle_Base
	{
		barrelArmor = 3.0; //Default 2.3
	};
	class M4A1_Base: Rifle_Base
	{
		barrelArmor = 3.550; //Default: 2.5
	};
	class M14_Base: Rifle_Base
	{
		barrelArmor = 3.0; //Default 2.2;
	};
	class M16A2_Base: Rifle_Base
	{
		barrelArmor = 3.0; //Default 2.5
	};
	class MP5K_Base: Rifle_Base
	{
		barrelArmor = 2.5; //Default is 1.25
	};
	class SKS_Base: Rifle_Base
	{
		barrelArmor = 2.9; //Default is 1.667
	};
	class SVD_Base: Rifle_Base
	{
		barrelArmor = 2.6; //Default is 1.6
	};
	class UMP45_Base: Rifle_Base
	{
		barrelArmor = 1.6; //Default is 0.9
	};
	//Pistols
	class Pistol_Base;
	class CZ75_Base: Pistol_Base
	{
		barrelArmor = 3.5; //Default is 2
	};
	class Glock19_Base: Pistol_Base
	{
		barrelArmor = 3.0; //Default is 1.5
	};
	class FNX45_Base: Pistol_Base
	{
		barrelArmor = 3.3; //Default is 1.7
	};
	//Shotgun maybe, but shotguns are kinda dirty.
};