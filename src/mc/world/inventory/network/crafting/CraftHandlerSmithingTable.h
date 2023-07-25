#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandlerSmithingTable : public ::CraftHandlerBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERSMITHINGTABLE
public:
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&) = delete;
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&)            = delete;
    CraftHandlerSmithingTable()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandlerSmithingTable\@\@EEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /**
     * @vftbl 6
     * @symbol ?_getLevelRecipes\@CraftHandlerSmithingTable\@\@EEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const* _getLevelRecipes() const;
};
