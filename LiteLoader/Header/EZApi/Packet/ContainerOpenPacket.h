#pragma once

#include "../Actor/ActorUniqueID.h"
#include "../Container/ContainerType.h"
#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

class ContainerOpenPacket : public Packet {
public:
    ContainerID   id   = ContainerID::Invalid;
    ContainerType type = (ContainerType)0;
    BlockPos      pos;
    ActorUniqueID actor_id = -1;

    inline ~ContainerOpenPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(ContainerOpenPacket, id) == 48);
static_assert(offsetof(ContainerOpenPacket, type) == 49);
static_assert(offsetof(ContainerOpenPacket, pos) == 52);
static_assert(offsetof(ContainerOpenPacket, actor_id) == 64);