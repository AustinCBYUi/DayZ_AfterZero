modded class InspectMenuNew
{
	static void MRTsMREs_UpdateItemInfo( Widget m_layoutRoot, EntityAI m_item )
	{
		ItemBase item_base = ItemBase.Cast( m_item );
		
		if( item_base && item_base.GetQuantity() > 0 && item_base.IsLiquidContainer() )
		{
			int liquid_type = item_base.GetLiquidType();
			
			if ( liquid_type == LIQUID_MRE_SHAKE )
	            WidgetTrySetText( m_layoutRoot, "ItemLiquidTypeWidget", "MRE Shake", Colors.BROWN );
			else if ( liquid_type == LIQUID_MRE_BEV )
	            WidgetTrySetText( m_layoutRoot, "ItemLiquidTypeWidget", "MRE Beverage", Colors.RED );
		}
	}
	
	override void SetItem( EntityAI item )
	{
		super.SetItem( item );
		
		InspectMenuNew.MRTsMREs_UpdateItemInfo( layoutRoot, item );
	}
};
