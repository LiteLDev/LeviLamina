#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerInstanceEventHandler {
public:
    // prevent constructor by default
    ServerInstanceEventHandler& operator=(ServerInstanceEventHandler const&);
    ServerInstanceEventHandler(ServerInstanceEventHandler const&);
    ServerInstanceEventHandler();
};
