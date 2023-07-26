#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventListener {

public:
    // prevent constructor by default
    NetworkPacketEventListener& operator=(NetworkPacketEventListener const&) = delete;
    NetworkPacketEventListener(NetworkPacketEventListener const&)            = delete;
    NetworkPacketEventListener()                                             = delete;
};
