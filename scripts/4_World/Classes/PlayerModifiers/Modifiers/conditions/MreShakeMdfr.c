class MreShakeMdfr: ModifierBase
{
	private const float MRE_SHAKE_BUFF_COEF = 2;
	static const int AGENT_THRESHOLD_ACTIVATE = 10;
	static const int AGENT_THRESHOLD_DEACTIVATE = 0;
	
	
	
	override void Init()
	{
		m_TrackActivatedTime	= true;
		m_IsPersistent			= true;
		m_ID 					= MRTsMRE_Modifiers.MDF_MRE_SHAKE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
	}
	
	
	
	override bool ActivateCondition(PlayerBase player)
	{
		if(player.GetSingleAgentCount(MRTsMRE_Agents.MRE_SHAKE) >= AGENT_THRESHOLD_ACTIVATE) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		if(player.GetSingleAgentCount(MRTsMRE_Agents.MRE_SHAKE) <= AGENT_THRESHOLD_DEACTIVATE) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	override void OnActivate(PlayerBase player)
	{
		//player.IncreaseDiseaseCount();
		if (player.GetNotifiersManager()) player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		//player.DecreaseDiseaseCount();
		if (player.GetNotifiersManager()) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		//player.GetStatHeatComfort().Set( GameConstants.ENVIRO_TEMPERATURE_INSIDE_COEF );
	}
};