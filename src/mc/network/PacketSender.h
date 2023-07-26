#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketSender {

public:
    // prevent constructor by default
    PacketSender& operator=(PacketSender const&) = delete;
    PacketSender(PacketSender const&)            = delete;
    PacketSender()                               = delete;
};
