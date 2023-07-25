#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPACKETEVENTLISTENER
public:
    NetworkPacketEventListener& operator=(NetworkPacketEventListener const&) = delete;
    NetworkPacketEventListener(NetworkPacketEventListener const&)            = delete;
    NetworkPacketEventListener()                                             = delete;
#endif

public:
};
