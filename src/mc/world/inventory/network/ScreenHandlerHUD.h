#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenHandlerHUD {

public:
    // prevent constructor by default
    ScreenHandlerHUD& operator=(ScreenHandlerHUD const&) = delete;
    ScreenHandlerHUD(ScreenHandlerHUD const&)            = delete;
    ScreenHandlerHUD()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerHUD\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&); // NOLINT
};
