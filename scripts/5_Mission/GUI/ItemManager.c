modded class ItemManager
{
	override void PrepareTooltip( EntityAI item, int x = 0, int y = 0 )
	{
		super.PrepareTooltip( item, x, y );
		
		InspectMenuNew.MRTsMREs_UpdateItemInfo( m_TooltipWidget, item );
	}
}