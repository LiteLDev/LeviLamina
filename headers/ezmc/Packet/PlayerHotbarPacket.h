#pragma once

#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../dll.h"

class PlayerHotbarPacket : public Packet {
public:
    unsigned    slot      = 0;
    bool        selected  = false;
    ContainerID container = ContainerID::Invalid;

    MCAPI PlayerHotbarPacket(void);
    MCAPI PlayerHotbarPacket(unsigned slot, ContainerID containerId, bool selected);
    inline ~PlayerHotbarPacket() {
    }

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(PlayerHotbarPacket, slot) == 48);
static_assert(offsetof(PlayerHotbarPacket, selected) == 52);
static_assert(offsetof(PlayerHotbarPacket, container) == 53);