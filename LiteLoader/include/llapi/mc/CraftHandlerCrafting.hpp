/**
 * @file  MC/CraftHandlerCrafting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerCrafting.
 *
 */
class CraftHandlerCrafting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERCRAFTING
public:
    class CraftHandlerCrafting& operator=(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftHandlerCrafting();
    /**
     * @hash   1544536833
     * @vftbl  1
     * @symbol ?handleConsumedItem@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
     */
    virtual enum ItemStackNetResult handleConsumedItem(enum ContainerEnumName, unsigned char, class ItemStack const &);
    /**
     * @hash   104925129
     * @vftbl  2
     * @symbol ?preHandleAction@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
     */
    virtual enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   241626464
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerCrafting@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   693006682
     * @vftbl  6
     * @symbol ?_getLevelRecipes@CraftHandlerCrafting@@EEBAPEBVRecipes@@XZ
     */
    virtual class Recipes const * _getLevelRecipes() const;
    /**
     * @hash   1472114331
     * @symbol ??0CraftHandlerCrafting@@QEAA@_NAEAVPlayer@@AEAVItemStackRequestActionCraftHandler@@@Z
     */
    MCAPI CraftHandlerCrafting(bool, class Player &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @hash   -1557843387
     * @symbol ?_handleAutoCraft@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftRecipeAuto@@@Z
     */
    MCAPI enum ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const &);
    /**
     * @hash   -12994399
     * @symbol ?_handleCraftOutput@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
     */
    MCAPI enum ItemStackNetResult _handleCraftOutput(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};