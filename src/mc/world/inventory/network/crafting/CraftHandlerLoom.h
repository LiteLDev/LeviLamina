#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandlerLoom : public ::CraftHandlerBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERLOOM
public:
    CraftHandlerLoom& operator=(CraftHandlerLoom const&) = delete;
    CraftHandlerLoom(CraftHandlerLoom const&)            = delete;
    CraftHandlerLoom()                                   = delete;
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
     * ?_handleCraftAction\@CraftHandlerLoom\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
};
