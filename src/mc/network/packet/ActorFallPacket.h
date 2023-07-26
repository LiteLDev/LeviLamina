#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorFallPacket {

public:
    // prevent constructor by default
    ActorFallPacket& operator=(ActorFallPacket const&) = delete;
    ActorFallPacket(ActorFallPacket const&)            = delete;
    ActorFallPacket()                                  = delete;
};
