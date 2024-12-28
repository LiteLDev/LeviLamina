#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on

class MinecraftPackets {
public:
    // prevent constructor by default
    MinecraftPackets& operator=(MinecraftPackets const&);
    MinecraftPackets(MinecraftPackets const&);
    MinecraftPackets();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::Packet> createPacket(::MinecraftPacketIds id);
    // NOLINTEND
};
