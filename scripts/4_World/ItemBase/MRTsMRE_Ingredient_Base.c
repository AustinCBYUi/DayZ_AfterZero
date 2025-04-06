class MRTsMRE_Ingredient_Base extends Inventory_Base
{
	
	void MRTsMRE_Ingredient_Base()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
			
		if ( IsSoundSynchRemote() )
		{
			Sound_Open_Ingredient_Play();
		}
		
	}
	
	void Sound_Open_Ingredient_Play()
	{
		// if i add a lot of custom sounds i might use this         \\\This gets the unopened ingredient's classname without the MRTsMRE_ prefix///
		// EffectSound sound = SEffectManager.PlaySound( "Open_" + GetType().Substring("MRTsMRE_".Length(), GetType().Length() - "MRTsMRE_".Length()) + "_SoundSet", GetPosition() );
		
		// for now i'll just use one sound for all ingredients
		EffectSound sound = SEffectManager.PlaySound( "Open_Ingredient_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void Open_Ingredient( PlayerBase player )
	{
		
		if (player)
		{
			
			SoundSynchRemote();
			
			string Ingredient_Open_Classname = GetType() + "_Open";
			
			TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, Ingredient_Open_Classname, player);
			lambda.SetTransferParams(true, true, true, false, 1000);
			
			player.ServerReplaceItemInHandsWithNew(lambda);
			
		}
		
		else
		{
			
			vector pos = GetPosition();
			GetGame().CreateObjectEx(Ingredient_Open_Classname, pos, ECE_PLACE_ON_SURFACE);
			GetGame().ObjectDelete( this );
			
		}
		
	}
	
	override void SetActions()
	{
		
		super.SetActions();
		
		AddAction(Action_Open_Ingredient);
		
	}
}