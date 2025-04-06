modded class ActionDrink
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		
		/*
		if( item.GetLiquidType() == LIQUID_MRE_SHAKE)
			player.InsertAgent(MRTsMRE_Agents.MRE_SHAKE, 1);
		if( item.GetLiquidType() == LIQUID_MRE_BEV)
			player.InsertAgent(MRTsMRE_Agents.LIQUID_MRE_BEV, 1);
		*/
		
		return true;
		
	}
};
