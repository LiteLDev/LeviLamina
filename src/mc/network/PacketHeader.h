#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketHeader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETHEADER
public:
    PacketHeader& operator=(PacketHeader const&) = delete;
    PacketHeader(PacketHeader const&)            = delete;
    PacketHeader()                               = delete;
#endif

public:
};
