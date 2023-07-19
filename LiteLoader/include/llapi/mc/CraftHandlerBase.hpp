/**
 * @file  CraftHandlerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include  "SimpleSparseContainer.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerBase.
 *
 */
class CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERBASE
public:
    class CraftHandlerBase& operator=(class CraftHandlerBase const &) = delete;
    CraftHandlerBase(class CraftHandlerBase const &) = delete;
    CraftHandlerBase() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleConsumedItem\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const &);
    /**
     * @vftbl 2
     * @symbol ?preHandleAction\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @vftbl 3
     * @symbol ?endRequestBatch\@CraftHandlerBase\@\@UEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @vftbl 4
     * @symbol ?_handleCraftAction\@CraftHandlerSmithingTable\@\@EEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &) = 0;
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerBase\@\@MEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @vftbl 6
     * @symbol ?_getLevelRecipes\@CraftHandlerBase\@\@MEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const * _getLevelRecipes() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftHandlerBase();
#endif

};
