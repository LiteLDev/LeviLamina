#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftApp {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTAPP
public:
    IMinecraftApp& operator=(IMinecraftApp const&) = delete;
    IMinecraftApp(IMinecraftApp const&)            = delete;
    IMinecraftApp()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMINECRAFTAPP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IMinecraftApp();
#endif
};
