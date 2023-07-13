/**
 * @file  CraftHandlerGrindstone.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerGrindstone.
 *
 */
class CraftHandlerGrindstone : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERGRINDSTONE
public:
    class CraftHandlerGrindstone& operator=(class CraftHandlerGrindstone const &) = delete;
    CraftHandlerGrindstone(class CraftHandlerGrindstone const &) = delete;
    CraftHandlerGrindstone() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_handleCraftAction\@CraftHandlerGrindstone\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerGrindstone\@\@EEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @symbol ?getResultItem\@CraftHandlerGrindstone\@\@SA?AU?$pair\@VItemStack\@\@UItemStackNetIdVariant\@\@\@std\@\@AEBVItemStack\@\@0\@Z
     */
    MCAPI static struct std::pair<class ItemStack, struct ItemStackNetIdVariant> getResultItem(class ItemStack const &, class ItemStack const &);

//private:
    /**
     * @symbol ?_getExperienceFromItem\@CraftHandlerGrindstone\@\@AEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getExperienceFromItem(class ItemStack const &) const;
    /**
     * @symbol ?_resolveNetIdAndValidate\@CraftHandlerGrindstone\@\@AEAA_NW4ContainerEnumName\@\@EAEBUItemStackNetIdVariant\@\@\@Z
     */
    MCAPI bool _resolveNetIdAndValidate(enum class ContainerEnumName, unsigned char, struct ItemStackNetIdVariant const &);
    /**
     * @symbol ?_getResultItemWithNoEnchants\@CraftHandlerGrindstone\@\@CA?AVItemStack\@\@AEAV2\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEA_N\@Z
     */
    MCAPI static class ItemStack _getResultItemWithNoEnchants(class ItemStack &, std::vector<class ItemStack> const &, bool &);

private:

};
