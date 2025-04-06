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
			"DZ_Gear_Containers",
			"DZ_Gear_Camping"
		};
	};
};

class CfgVehicles
{
    //Safe Config
    class SeaChest;
    class DZAZ_Safe: SeaChest
    {
        scope=2;
		displayName="Large Safe";
		descriptionShort="A large digital safe that utilizes a digital 5 pin combination to lock/unlock the safe.";
		model="DayZ_AfterZero\data\safe\data\dzaz_safe.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=6000;
		itemBehaviour=2;
		physLayer = "item_large";
		itemSize[]={10,10};
		carveNavmesh=1;
		canBeDigged=0;
		rotationFlags=0;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZ_AfterZero\data\safe\data\dzaz_safe_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1200;
					transferToAttachmentsCoef=0.0;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\sea_chest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\sea_chest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\sea_chest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\sea_chest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\sea_chest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={12,62};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPerioud=0.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
    };
};