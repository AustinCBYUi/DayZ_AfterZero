class MRTsMRE_Base extends Inventory_Base
{
	
	void MRTsMRE_Base()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
			
		if ( IsSoundSynchRemote() )
		{
			Sound_OpenMRE_Play();
		}
		
	}
	
	void Sound_OpenMRE_Play()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Open_MRE_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void Open_MRTsMRE( PlayerBase player )
	{
		
		if (player)
		{
			
			SoundSynchRemote();
			
			string Menu_Open_Classname = GetType() + "_Open";
			
			Open_MRTsMRE_Lambda lambda = new Open_MRTsMRE_Lambda(this, Menu_Open_Classname, player);
			lambda.SetTransferParams(true, true, true, false, 1);
			
			player.ServerReplaceItemInHandsWithNew(lambda);
			
			
			
		}
		
		else
		{
			
			vector pos = GetPosition();
			GetGame().CreateObjectEx(Menu_Open_Classname, pos, ECE_PLACE_ON_SURFACE);
			GetGame().ObjectDelete( this );
			
		}
		
	}
	
	override void SetActions()
	{
		
		super.SetActions();
		
		AddAction(Action_Open_MRTsMRE);
		
	}
}
class Open_MRTsMRE_Lambda : TurnItemIntoItemLambda
{
	ref TStringArray Menu_Contents = new TStringArray;
	
	void Open_MRTsMRE_Lambda (EntityAI old_item, string new_item_type, PlayerBase player) 
	{
		old_item.ConfigGetTextArray("Menu_Contents", Menu_Contents);
	}
	
	override void OnSuccess (EntityAI new_item)
	{
		super.OnSuccess(new_item);
		if( m_Player )
		{
			
			TStringArray SnackBread =
			{
				"", // Plain
				"Wheat",
				"Multi"
			};
			TStringArray Tortillas =
			{
				"Plain",
				"Plain", // Plain more common
				"Chipotle"
			};
			TStringArray EnergyBar =
			{
				"Chocolate",
				"Chocolate",
				"CranRaspberry",
				"AppleCin"
			};
			TStringArray Candy =
			{
				"MnMs",
				"MnMsPeanut",
				"ReesesPieces",
				"Skittles",
				"SkittlesSour"
			};
			TStringArray Cookie =
			{
				"ChocolateChip",
				"Oatmeal"
			};
			TStringArray PoundCake =
			{
				"Lemon"
			};
			TStringArray Jam =
			{
				"Apple",
				"Strawberry",
				"Grape"
			};
			TStringArray CheeseSpread =
			{
				"",
				"Jalapeno",
				"WithBacon"
			};
			TStringArray PeanutButter =
			{
				"",
				"Chunky"
				// "Chocolate" might add later
			};
			TStringArray Crackers =
			{
				"",
				"Vegetable"
			};
			TStringArray Shakes =
			{
				"HotCocoa",
				"HotCocoaHazelnut",
				"ProteinChoco",
				"CappuccinoIrishCream",
				"CappuccinoFrenchVanilla",
				"CappuccinoMocha"
			};
			TStringArray Beverages =
			{
				"TropicalPunch",
				"FruitPunch",
				"Orange",
				"LemonLime",
				"Grape"
			};
			
			for (int i = 0; i < Menu_Contents.Count(); i++) 
				if ( Menu_Contents[i] == "MRTsMRE_EnergyBar")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_EnergyBar" + EnergyBar.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_Candy")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_" + Candy.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_Cookie")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Cookie" + Cookie.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_PoundCake")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_PoundCake" + PoundCake.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_Jam")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Jam" + Jam.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_SnackBread")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_SnackBread" + SnackBread.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_Tortillas")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Tortillas" + Tortillas.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_CheeseSpread")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_CheeseSpread" + CheeseSpread.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_PeanutButter")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_PeanutButter" + PeanutButter.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_Crackers")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Crackers" + Crackers.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_PowderShake")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Powder" + Shakes.GetRandomElement() );
				else if ( Menu_Contents[i] == "MRTsMRE_PowderBeverage")
					new_item.GetInventory().CreateAttachment( "MRTsMRE_Powder" + Beverages.GetRandomElement() );
				else
					new_item.GetInventory().CreateAttachment( Menu_Contents[i] );
			
		}
	}
	
};