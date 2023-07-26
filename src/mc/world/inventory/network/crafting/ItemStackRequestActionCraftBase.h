#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackRequestActionCraftBase {

public:
    // prevent constructor by default
    ItemStackRequestActionCraftBase& operator=(ItemStackRequestActionCraftBase const&) = delete;
    ItemStackRequestActionCraftBase(ItemStackRequestActionCraftBase const&)            = delete;
    ItemStackRequestActionCraftBase()                                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTBASE
    /**
     * @symbol ?getCraftAction\@ItemStackRequestActionCraftBase\@\@UEBAPEBV1\@XZ
     */
    MCVAPI class ItemStackRequestActionCraftBase const* getCraftAction() const; // NOLINT
    /**
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING\@ItemStackRequestActionCraftBase\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette&, bool); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackRequestActionCraftBase(); // NOLINT
#endif
};
