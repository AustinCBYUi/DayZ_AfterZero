

enum MRTsMRE_Modifiers
{
	
	MDF_MRE_SHAKE = 564,
	MDF_MRE_BEV = 564,
	
}

modded class ModifiersManager
{
	
	override void Init()
	{
		
		super.Init();

		AddModifier(new MreShakeMdfr);
		AddModifier(new MreBevMdfr);
		
	}
	
}

