class Action_Mix_Mre_Powder_CB: ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 5 ); // How long the action will take ( in seconds )
	}
};

class Action_Mix_Mre_Powder: ActionContinuousBase
{
	string text;
	MRTsMRE_Powder_Base MrePowder;
	Bottle_Base Bottle;
	int LiquidTypeToMix;
	
	void Action_Mix_Mre_Powder()
	{
		m_CallbackClass = Action_Mix_Mre_Powder_CB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined(2);
	}
	
	override string GetText()
	{
		return text;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target )	return false;
		
		if ( player.GetItemInHands().IsInherited( MRTsMRE_Powder_Base ) )
		{
			if ( !Class.CastTo( MrePowder, player.GetItemInHands() ) )	return false;
			if ( !Class.CastTo( Bottle, target.GetObject() ) )	return false;
			if ( target.GetObject().IsInherited( Pot ) )	return false; // So players can put custom liquids in pot but cant make a whole pot of it
		}
		else if ( player.GetItemInHands().IsInherited( Bottle_Base ) )
		{
			if ( !Class.CastTo( MrePowder, target.GetObject() ) )	return false;
			if ( !Class.CastTo( Bottle, player.GetItemInHands() ) )	return false;
			if ( player.GetItemInHands().IsInherited( Pot ) )	return false; // So players can put custom liquids in pot but cant make a whole pot of it
		}
		else	return false;
		
		if ( Bottle.GetLiquidType() != LIQUID_WATER )	return false;
		
		text = "Mix " + MrePowder.GetDisplayName().Substring("Powdered ".Length(), MrePowder.GetDisplayName().Length() - "Powdered ".Length());
		LiquidTypeToMix = MrePowder.ConfigGetInt( "LiquidTypeToMix" );
		
		return true;
	}
	
	override void OnStartAnimationLoopServer( ActionData action_data )
	{
		super.OnStartAnimationLoopServer( action_data );
		
		MrePowder.SoundSynchRemote();
	}
	
	override void OnEndAnimationLoopServer( ActionData action_data )
	{
		if ( MrePowder )
			MrePowder.NotSoundSynchRemote();
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		Bottle.SetLiquidType( LiquidTypeToMix );
		
		GetGame().ObjectDelete( MrePowder );
	}
}