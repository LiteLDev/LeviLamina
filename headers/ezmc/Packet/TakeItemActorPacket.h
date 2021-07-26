#pragma once

#include "../Actor/ActorRuntimeID.h"
#include "../Core/Packet.h"
#include "../dll.h"

class TakeItemActorPacket : public Packet {
public:
    ActorRuntimeID entity, target;

    inline ~TakeItemActorPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};