#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Packet {
public:
    // prevent constructor by default
    Packet& operator=(Packet const&);
    Packet(Packet const&);
    Packet();
};

}; // namespace RakNet
