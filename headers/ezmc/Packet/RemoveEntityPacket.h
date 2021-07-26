#pragma once

#include "../Core/NBT.h"
#include "../dll.h"

class RemoveEntityPacket : public EntityServerPacket {
public:
    inline ~RemoveEntityPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};