#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ScreenHandlerBase.h"

class ScreenHandlerHUD : public ::ScreenHandlerBase {

public:
    // prevent constructor by default
    ScreenHandlerHUD& operator=(ScreenHandlerHUD const&) = delete;
    ScreenHandlerHUD(ScreenHandlerHUD const&)            = delete;
    ScreenHandlerHUD()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerHUD\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&);
    // NOLINTEND
};
