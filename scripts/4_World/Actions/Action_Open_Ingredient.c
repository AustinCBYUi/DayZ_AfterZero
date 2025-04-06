




class Action_Open_Ingredient: ActionSingleUseBase
{
	void Action_Open_Ingredient()
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
		MRTsMRE_Ingredient_Base Ingredient_Closed = MRTsMRE_Ingredient_Base.Cast( action_data.m_MainItem );
		
		if (Ingredient_Closed)
		{
			PlayerBase player;
			
			if (action_data)
			{
				
				player = action_data.m_Player;
				
				Ingredient_Closed.Open_Ingredient( player );
				
			}
		}
	}
};