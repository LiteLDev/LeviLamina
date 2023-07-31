#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"

class CraftHandlerCrafting {

public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&) = delete;
    CraftHandlerCrafting(CraftHandlerCrafting const&)            = delete;
    CraftHandlerCrafting()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?handleConsumedItem\@CraftHandlerCrafting\@\@UEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult
    handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const&);
    /**
     * @vftbl 2
     * @symbol
     * ?preHandleAction\@CraftHandlerCrafting\@\@UEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerCrafting\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?_getLevelRecipes\@CraftHandlerCrafting\@\@EEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const* _getLevelRecipes() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_handleAutoCraft\@CraftHandlerCrafting\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftRecipeAuto\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const&);
    /**
     * @symbol ?_handleCarefulRestoration\@CraftHandlerCrafting\@\@AEBAXAEBVItemInstance\@\@\@Z
     */
    MCAPI void _handleCarefulRestoration(class ItemInstance const&) const;
    /**
     * @symbol
     * ?_handleCraftOutput\@CraftHandlerCrafting\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionCraft\@V?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@$0M\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult
    _handleCraftOutput(class ItemStackRequestActionCraft<
                       class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>,
                       12> const&);
    // NOLINTEND
};
