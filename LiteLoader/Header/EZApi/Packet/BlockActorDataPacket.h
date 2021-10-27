#pragma once

#include "../Core/NBT.h"
#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

class BlockActorDataPacket : public Packet {
public:
    BlockPos    pos;
    CompoundTag tag;

    BlockActorDataPacket(BlockPos const& pos, CompoundTag tag);

    inline ~BlockActorDataPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};