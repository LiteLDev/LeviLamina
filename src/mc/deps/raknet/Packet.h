#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_PACKET
public:
    Packet& operator=(Packet const&) = delete;
    Packet(Packet const&)            = delete;
    Packet()                         = delete;
#endif

public:
};

}; // namespace RakNet
