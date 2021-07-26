#pragma once

#include "../Actor/ActorUniqueID.h"
#include "../Core/Packet.h"
#include "../dll.h"

class RemoveActorPacket : public Packet {
public:
    ActorUniqueID uid;

    inline ~RemoveActorPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};