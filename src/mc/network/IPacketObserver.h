#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketObserver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPACKETOBSERVER
public:
    IPacketObserver& operator=(IPacketObserver const&) = delete;
    IPacketObserver(IPacketObserver const&)            = delete;
    IPacketObserver()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKETOBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPacketObserver();
#endif
};
