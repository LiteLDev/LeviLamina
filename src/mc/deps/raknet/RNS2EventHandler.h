#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RNS2EventHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RNS2EVENTHANDLER
public:
    RNS2EventHandler& operator=(RNS2EventHandler const&) = delete;
    RNS2EventHandler(RNS2EventHandler const&)            = delete;
    RNS2EventHandler()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_RNS2EVENTHANDLER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RNS2EventHandler();
#endif
};

}; // namespace RakNet
