#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerLocator {

public:
    // prevent constructor by default
    ServerLocator& operator=(ServerLocator const&) = delete;
    ServerLocator(ServerLocator const&)            = delete;
    ServerLocator()                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLOCATOR
    /**
     * @symbol ?_onDisable\@ServerLocator\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@ServerLocator\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerLocator();
#endif
    // NOLINTEND
};
