class MRTsMRE_Ingredient_Open_Base extends Edible_Base
{
	
	override void SetActions()
	{
		
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatCan);
		
	}
	
}