#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketHeader {

public:
    // prevent constructor by default
    PacketHeader& operator=(PacketHeader const&) = delete;
    PacketHeader(PacketHeader const&)            = delete;
    PacketHeader()                               = delete;
};
