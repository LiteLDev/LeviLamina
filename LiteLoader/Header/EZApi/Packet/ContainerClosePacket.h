#pragma once

#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../dll.h"

class ContainerClosePacket : public Packet {
public:
    ContainerID id     = ContainerID::Invalid;
    bool        server = false;

    inline ~ContainerClosePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(ContainerClosePacket, id) == 48);