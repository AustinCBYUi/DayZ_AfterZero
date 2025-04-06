




class Action_Open_MainCourse: ActionSingleUseBase
{
	void Action_Open_MainCourse()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_UNPINGRENAGE;
		m_FullBody = false;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		MRTsMRE_MainCourse_Base MainCourse_Closed = MRTsMRE_MainCourse_Base.Cast( action_data.m_MainItem );
		
		if (MainCourse_Closed)
		{
			PlayerBase player;
			
			if (action_data)
			{
				
				player = action_data.m_Player;
				
				MainCourse_Closed.Open_MainCourse( player );
				
			}
		}
	}
};