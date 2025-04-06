// Script File
modded class PluginRecipesManagerBase extends PluginBase
{
	override void RegisterRecipes()
	{
		super.RegisterRecipes();
		RegisterRecipe(new craftL2Bandage);
		//UnregisterRecipe("CraftStoneKnife");
	}
};