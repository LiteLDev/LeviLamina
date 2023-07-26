#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketObserver {

public:
    // prevent constructor by default
    IPacketObserver& operator=(IPacketObserver const&) = delete;
    IPacketObserver(IPacketObserver const&)            = delete;
    IPacketObserver()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKETOBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPacketObserver(); // NOLINT
#endif
};
