#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketSender {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETSENDER
public:
    PacketSender& operator=(PacketSender const&) = delete;
    PacketSender(PacketSender const&)            = delete;
    PacketSender()                               = delete;
#endif

public:
};
