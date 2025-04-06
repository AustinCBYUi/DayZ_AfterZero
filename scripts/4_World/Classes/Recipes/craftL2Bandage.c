// Script File
class craftL2Bandage extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Level II Bandage";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1.2;
		m_Specialty = -0.01;
		
			//0 is Pristine, 1 is Worn, 2 is Damaged, 3 is Badly Damaged,
			//4 is Ruined
		
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 0;
		
		m_MinQuantityIngredient[0] = 4;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 2;
		
		m_MinQuantityIngredient[1] = 1;
		m_MaxQuantityIngredient[1] = -1;
		
		//Start RecipeBase
		
		InsertIngredient(0,"BandageDressing");
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
		
		//Ingredient 2 
		InsertIngredient(1, "DZAZ_MedicalAbsorbent");
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = -1;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		
		AddResult("DZAZ_Bandage_Level_2");
		
		m_ResultSetFullQuantity[0] = true;
		m_ResultSetQuantity[0] = -1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2; //to ground 
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}
	
	//Cando 
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		ItemBase ingredient1 = ingredients[0];
		if (ingredient1.Type() == BandageDressing)
		{
			if (ingredient1.GetQuantity() == ingredient1.GetQuantityMax())
			{
				return true;
			}
			return false;
		}
		return true;
	}
	
	//Do
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe Do called for bandage","recipes");
		
		ItemBase ingredient1 = ingredients[0];
		ItemBase ingredient2 = ingredients[1];
		
		if (ingredients[0].Type() == BandageDressing)
		{
			ingredient1.AddQuantity(-4);
			ingredient2.AddQuantity(-1);
		}
	}
};