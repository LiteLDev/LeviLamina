#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftPackets {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTPACKETS
public:
    MinecraftPackets& operator=(MinecraftPackets const&) = delete;
    MinecraftPackets(MinecraftPackets const&)            = delete;
    MinecraftPackets()                                   = delete;
#endif

public:
    /**
     * @symbol ?createPacket\@MinecraftPackets\@\@SA?AV?$shared_ptr\@VPacket\@\@\@std\@\@W4MinecraftPacketIds\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class Packet> createPacket(enum class MinecraftPacketIds);
};
