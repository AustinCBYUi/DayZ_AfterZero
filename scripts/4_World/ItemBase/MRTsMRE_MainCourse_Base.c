class MRTsMRE_MainCourse_Base extends Inventory_Base
{
	
	void MRTsMRE_MainCourse_Base()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
			
		if ( IsSoundSynchRemote() )
		{
			Sound_OpenMainCourse_Play();
		}
		
	}
	
	void Sound_OpenMainCourse_Play()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Open_MainCourse_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void Open_MainCourse( PlayerBase player )
	{
		
		if (player)
		{
			
			SoundSynchRemote();
			
			string MainCourse_Open_Classname = GetType() + "_Open";
			
			TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, MainCourse_Open_Classname, player);
			lambda.SetTransferParams(true, true, true, false, 1000);
			
			player.ServerReplaceItemInHandsWithNew(lambda);
			
		}
		
		else
		{
			
			vector pos = GetPosition();
			GetGame().CreateObjectEx(MainCourse_Open_Classname, pos, ECE_PLACE_ON_SURFACE);
			GetGame().ObjectDelete( this );
			
		}
		
	}
	
	override void SetActions()
	{
		
		super.SetActions();
		
		AddAction(Action_Open_MainCourse);
		
	}
}