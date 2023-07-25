#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenHandlerHUD {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERHUD
public:
    ScreenHandlerHUD& operator=(ScreenHandlerHUD const&) = delete;
    ScreenHandlerHUD(ScreenHandlerHUD const&)            = delete;
    ScreenHandlerHUD()                                   = delete;
#endif

public:
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
};
