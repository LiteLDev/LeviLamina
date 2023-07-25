#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerLocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATOR
public:
    ServerLocator& operator=(ServerLocator const&) = delete;
    ServerLocator(ServerLocator const&)            = delete;
    ServerLocator()                                = delete;
#endif

public:
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
};
