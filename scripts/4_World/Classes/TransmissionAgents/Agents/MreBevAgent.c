class MreBevAgent extends AgentBase
{
	override void Init()
	{
		m_Type 					= MRTsMRE_Agents.MRE_BEV;
		m_Invasibility 			= 0;
		m_TransferabilityIn		= 1;
		m_TransferabilityOut	= 0;
		m_AntibioticsResistance = 1;
		m_MaxCount 				= 900;
		m_Potency 				= EStatLevels.CRITICAL;
		m_DieOffSpeed 			= 1;
		m_Digestibility 		= 1;
	}
}