class MRTsMRE_Powder_Base extends Inventory_Base
{
	EffectSound sound;
	
	void MRTsMRE_Powder_Base()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsSoundSynchRemote() )
		{
			if ( !sound )
			{
				sound = SEffectManager.PlaySound( "MixMrePowder_SoundSet", GetPosition() );
			}
		}
		else if ( !IsSoundSynchRemote() )
		{
			if ( sound )
			{
				sound.SoundStop();
				SEffectManager.DestroySound( sound );
				sound = NULL;
			}
		}
	}
	
	void NotSoundSynchRemote()
	{
		m_IsSoundSynchRemote = false;
		
		SetSynchDirty();
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(Action_Mix_Mre_Powder);
	}
};