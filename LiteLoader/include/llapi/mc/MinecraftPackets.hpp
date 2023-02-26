/**
 * @file  MinecraftPackets.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftPackets.
 *
 */
class MinecraftPackets {

#define AFTER_EXTRA
// Add Member There
public:
//Warning temporary
static std::shared_ptr<class Packet> createPacket(int type)
{
    return createPacket((MinecraftPacketIds)type);
}
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTPACKETS
public:
    class MinecraftPackets& operator=(class MinecraftPackets const &) = delete;
    MinecraftPackets(class MinecraftPackets const &) = delete;
    MinecraftPackets() = delete;
#endif

public:
    /**
     * @symbol  ?createPacket\@MinecraftPackets\@\@SA?AV?$shared_ptr\@VPacket\@\@\@std\@\@W4MinecraftPacketIds\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class Packet> createPacket(enum class MinecraftPacketIds);

};