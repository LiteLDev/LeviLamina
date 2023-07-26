#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketHandlerDispatcher {

public:
    // prevent constructor by default
    IPacketHandlerDispatcher& operator=(IPacketHandlerDispatcher const&) = delete;
    IPacketHandlerDispatcher(IPacketHandlerDispatcher const&)            = delete;
    IPacketHandlerDispatcher()                                           = delete;
};
