#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Packet {

public:
    // prevent constructor by default
    Packet& operator=(Packet const&) = delete;
    Packet(Packet const&)            = delete;
    Packet()                         = delete;
};

}; // namespace RakNet
