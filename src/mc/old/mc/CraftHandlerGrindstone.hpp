/**
 * @file  CraftHandlerGrindstone.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CraftHandlerGrindstone();
    /**
     * @vftbl  4
     * @symbol  ?_handleCraftAction\@CraftHandlerGrindstone\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl  5
     * @symbol  ?_postCraftRequest\@CraftHandlerGrindstone\@\@EEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @symbol  ??0CraftHandlerGrindstone\@\@QEAA\@AEAVPlayer\@\@AEAVItemStackRequestActionCraftHandler\@\@\@Z
     */
    MCAPI CraftHandlerGrindstone(class Player &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @symbol  ?_createResultItem\@CraftHandlerGrindstone\@\@AEAA?AVItemStack\@\@AEBV2\@0\@Z
     */
    MCAPI class ItemStack _createResultItem(class ItemStack const &, class ItemStack const &);
    /**
     * @symbol  ?_getExperienceFromItem\@CraftHandlerGrindstone\@\@AEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getExperienceFromItem(class ItemStack const &) const;
    /**
     * @symbol  ?_getResultItemWithNoEnchants\@CraftHandlerGrindstone\@\@AEAA?AVItemStack\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEA_N\@Z
     */
    MCAPI class ItemStack _getResultItemWithNoEnchants(std::vector<class ItemStack> const &, bool &);
    /**
     * @symbol  ?_resolveNetIdAndValidate\@CraftHandlerGrindstone\@\@AEAA_NW4ContainerEnumName\@\@EAEBUItemStackNetIdVariant\@\@\@Z
     */
    MCAPI bool _resolveNetIdAndValidate(enum class ContainerEnumName, unsigned char, struct ItemStackNetIdVariant const &);

private:

};