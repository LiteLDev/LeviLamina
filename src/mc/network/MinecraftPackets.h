#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated inclusion list
#include "mc/enums/MinecraftPacketIds.h"

class MinecraftPackets {
public:
    // prevent constructor by default
    MinecraftPackets& operator=(MinecraftPackets const&);
    MinecraftPackets(MinecraftPackets const&);
    MinecraftPackets();

public:
    // NOLINTBEGIN
    // symbol: ?createPacket@MinecraftPackets@@SA?AV?$shared_ptr@VPacket@@@std@@W4MinecraftPacketIds@@@Z
    MCAPI static std::shared_ptr<class Packet> createPacket(::MinecraftPacketIds id);

    // NOLINTEND
};
