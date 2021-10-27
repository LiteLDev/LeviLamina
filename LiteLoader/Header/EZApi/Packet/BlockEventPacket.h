#pragma once

#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

class BlockEventPacket : public Packet {
public:
    BlockPos pos;
    int      a = 0, b = 0;

    inline ~BlockEventPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};