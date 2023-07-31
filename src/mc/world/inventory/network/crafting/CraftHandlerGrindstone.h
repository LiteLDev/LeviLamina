#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandlerGrindstone : public ::CraftHandlerBase {

public:
    // prevent constructor by default
    CraftHandlerGrindstone& operator=(CraftHandlerGrindstone const&) = delete;
    CraftHandlerGrindstone(CraftHandlerGrindstone const&)            = delete;
    CraftHandlerGrindstone()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerGrindstone\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerGrindstone\@\@EEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @symbol
     * ?getResultItem\@CraftHandlerGrindstone\@\@SA?AU?$pair\@VItemStack\@\@UItemStackNetIdVariant\@\@\@std\@\@AEBVItemStack\@\@0\@Z
     */
    MCAPI static std::pair<class ItemStack, struct ItemStackNetIdVariant>
    getResultItem(class ItemStack const&, class ItemStack const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getExperienceFromItem\@CraftHandlerGrindstone\@\@AEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getExperienceFromItem(class ItemStack const&) const;
    /**
     * @symbol
     * ?_getResultItemWithNoEnchants\@CraftHandlerGrindstone\@\@CA?AVItemStack\@\@AEAV2\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEA_N\@Z
     */
    MCAPI static class ItemStack
    _getResultItemWithNoEnchants(class ItemStack&, std::vector<class ItemStack> const&, bool&);
    /**
     * @symbol
     * ?_resolveNetIdAndValidate\@CraftHandlerGrindstone\@\@AEAA_NW4ContainerEnumName\@\@EAEBUItemStackNetIdVariant\@\@\@Z
     */
    MCAPI bool
    _resolveNetIdAndValidate(enum class ContainerEnumName, unsigned char, struct ItemStackNetIdVariant const&);
    // NOLINTEND
};
