#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerNetworkEventHandler {

public:
    // prevent constructor by default
    ServerNetworkEventHandler& operator=(ServerNetworkEventHandler const&) = delete;
    ServerNetworkEventHandler(ServerNetworkEventHandler const&)            = delete;
    ServerNetworkEventHandler()                                            = delete;
};
