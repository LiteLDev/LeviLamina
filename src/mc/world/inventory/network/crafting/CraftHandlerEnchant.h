#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"

class CraftHandlerEnchant : public ::CraftHandlerBase {

public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&) = delete;
    CraftHandlerEnchant(CraftHandlerEnchant const&)            = delete;
    CraftHandlerEnchant()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?endRequestBatch\@CraftHandlerEnchant\@\@MEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerEnchant\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerEnchant\@\@MEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getEnchantingModel\@CraftHandlerEnchant\@\@AEBAAEAVEnchantingContainerManagerModel\@\@XZ
     */
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;
    /**
     * @symbol
     * ?_handleEnchant\@CraftHandlerEnchant\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionCraft\@V?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@$0M\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<
                                                       class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>,
                                                       12> const&);
    // NOLINTEND
};
