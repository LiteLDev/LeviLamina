#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftApp {

public:
    // prevent constructor by default
    IMinecraftApp& operator=(IMinecraftApp const&) = delete;
    IMinecraftApp(IMinecraftApp const&)            = delete;
    IMinecraftApp()                                = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMINECRAFTAPP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IMinecraftApp(); // NOLINT
#endif
};
