#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/Packet.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

class MinecraftPackets {
public:
    // prevent constructor by default
    MinecraftPackets& operator=(MinecraftPackets const&);
    MinecraftPackets(MinecraftPackets const&);
    MinecraftPackets();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class Packet> createPacket(::MinecraftPacketIds id);

    // NOLINTEND
};
