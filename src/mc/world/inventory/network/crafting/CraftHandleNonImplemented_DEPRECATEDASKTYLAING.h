#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public ::CraftHandlerBase {

public:
    // prevent constructor by default
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING&
    operator=(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&)                                      = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING()                                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?_handleCraftAction\@CraftHandleNonImplemented_DEPRECATEDASKTYLAING\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&); // NOLINT
};
