class MRTsMRE_CRE_Crayon_Base extends Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatCan);
	}
}