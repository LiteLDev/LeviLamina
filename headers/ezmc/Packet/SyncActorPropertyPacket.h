#pragma once

#include "../Core/NBT.h"
#include "../dll.h"

class SyncActorPropertyPacket : public Packet {
public:
    CompoundTag data;

    inline ~SyncActorPropertyPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};