#pragma once

#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

class ItemFrameDropItemPacket : public Packet {
public:
    BlockPos pos;

    inline ~ItemFrameDropItemPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};