#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public ::CraftHandlerBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLENONIMPLEMENTED_DEPRECATEDASKTYLAING
public:
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING&
    operator=(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&)                                      = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING()                                                      = delete;
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
     * ?_handleCraftAction\@CraftHandleNonImplemented_DEPRECATEDASKTYLAING\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
};
