
modded class Attachments
{
	override void InitAttachmentGrid( int att_row_index )
	{
		super.InitAttachmentGrid( att_row_index );
		
		for ( int i = 0; i < m_AttachmentSlotNames.Count(); i++ )
		{
			SlotsIcon icon2 = SlotsContainer.Cast( m_AttachmentsContainer.Get( ( i / ITEMS_IN_ROW ) ) ).GetSlotIcon( i % ITEMS_IN_ROW );
			WidgetEventHandler.GetInstance().RegisterOnDoubleClick( icon2.GetPanelWidget(), m_Parent, "DoubleClick" );
			
			if( m_AttachmentSlotNames[i].Contains( "MRTsMRE" ) )
				icon2.GetGhostSlot().LoadImageFile( 0, "set:MRTsMREs image:IconGhostMRE");
			
			if( m_AttachmentSlotNames[i].Contains( "CreCrayon" ) )
				icon2.GetGhostSlot().LoadImageFile( 0, "set:MRTsMREs image:IconGhostCrayon");
			
			int slot_id = InventorySlots.GetSlotIdFromString( m_AttachmentSlotNames[i] );
			m_AttachmentSlots.Insert( slot_id, icon2 );
			icon2.SetSlotID(slot_id);
			
			EntityAI item = m_Entity.GetInventory().FindAttachment( slot_id );
			if( item )
				AttachmentAdded( item, m_AttachmentSlotNames[i], m_Entity );
			else
				icon2.Clear();
		}
	}
}
