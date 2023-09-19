#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPacketEventListener {
public:
    // prevent constructor by default
    NetworkPacketEventListener& operator=(NetworkPacketEventListener const&);
    NetworkPacketEventListener(NetworkPacketEventListener const&);
    NetworkPacketEventListener();
};
