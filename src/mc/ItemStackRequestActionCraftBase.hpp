/**
 * @file  ItemStackRequestActionCraftBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftBase.
 *
 */
class ItemStackRequestActionCraftBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTBASE
public:
    class ItemStackRequestActionCraftBase& operator=(class ItemStackRequestActionCraftBase const &) = delete;
    ItemStackRequestActionCraftBase(class ItemStackRequestActionCraftBase const &) = delete;
    ItemStackRequestActionCraftBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTBASE
    /**
     * @symbol  ?getCraftAction\@ItemStackRequestActionCraftBase\@\@UEBAPEBV1\@XZ
     */
    MCVAPI class ItemStackRequestActionCraftBase const * getCraftAction() const;
    /**
     * @symbol  ?postLoadItems_DEPRECATEDASKTYLAING\@ItemStackRequestActionCraftBase\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ItemStackRequestActionCraftBase();
#endif

};