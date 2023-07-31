#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RNS2EventHandler {

public:
    // prevent constructor by default
    RNS2EventHandler& operator=(RNS2EventHandler const&) = delete;
    RNS2EventHandler(RNS2EventHandler const&)            = delete;
    RNS2EventHandler()                                   = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_RNS2EVENTHANDLER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RNS2EventHandler();
#endif
    // NOLINTEND
};

}; // namespace RakNet
