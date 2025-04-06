modded class ActionConstructor
{
    override void RegisterActions (TTypenameArray actions)
    {
        super.RegisterActions(actions);
        //DZ_AfterZero Safe
        actions.Insert( ActionCloseDZAZ_Safe );
        actions.Insert( ActionOpenDZAZ_Safe );

        //Mr T's MRE Actions
        actions.Insert( Action_Open_MRTsMRE );
        actions.Insert( Action_Open_MainCourse );
        actions.Insert( Action_Open_Ingredient );
        actions.Insert( Action_Mix_Mre_Powder );
    };
};