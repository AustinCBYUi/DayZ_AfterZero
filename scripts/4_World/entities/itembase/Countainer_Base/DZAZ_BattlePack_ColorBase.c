// Script File
class DZAZ_BattlePack_ColorBase : Container_Base
{
	//cargo item into/outo this.Cargo
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if ( GetHealthLevel() == GameConstants.STATE_RUINED )
			return false;
		
//		if ( !IsKindOf("Ammunition_Base" )
//			return false;
		
		if ( item.IsKindOf("Ammunition_Base" ))
			return true;

		if ( !item.IsKindOf("Ammunition_Base" ))
			return false;
		return false;
	}
}

class DZAZ_545BattlePack_RUS : DZAZ_BattlePack_ColorBase {};
class DZAZ_556BattlePack_USA : DZAZ_BattlePack_ColorBase {};