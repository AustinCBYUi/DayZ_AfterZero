modded class PlayerBase
{
    override void Init()
    {
		if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			DayzPlayerItemBehaviorCfg fireArmsItemBehaviour = new DayzPlayerItemBehaviorCfg;
			fireArmsItemBehaviour.SetFirearms();
			
			DayzPlayerItemBehaviorCfg tools_1h = new DayzPlayerItemBehaviorCfg;
			tools_1h.SetToolsOneHanded();
			
			string plr_main_1h = "dz/anims/workspaces/player/player_main/player_main_1h.asi";
			
			// MRE
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Base",						plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/first_aid_kit.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Open_Base",					plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/first_aid_kit.anm"				);
			
			// MainCourse
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_MainCourse_Base",				plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_MainCourse_Open_Base",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Menu17_MainCourse_Open",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Menu19_MainCourse_Open",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Menu23_MainCourse_Open",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			
			// Ingredients
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Ingredient_Base",				plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Ingredient_Open_Base",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_SlimJim_Open",				plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm"		);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_PoptartBrownSugar",			plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CobblerCherryBlueberry",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CobblerCherryBlueberry_Open",	plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CombosPizza",					plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CombosPizza_Open",			plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_FruitsWetPack",				plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_FruitsWetPack_Open",			plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_TrailMixRecovery",			plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_TrailMixRecovery_Open",		plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/box_cereal.anm"				);
			
			// Powders
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_Powder_Base",					plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_PowderTropicalPunch",			plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm"		);
			
			// CRE
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CRE",							plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CRE_Open",					plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/powdered_milk.anm"				);
			GetDayZPlayerType().AddItemInHandsProfileIK( "MRTsMRE_CRE_Crayon_Base",				plr_main_1h,	tools_1h,	"dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm"		);
			
		}
		
		super.Init();	
    }
}
