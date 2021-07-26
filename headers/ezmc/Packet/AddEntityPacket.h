#pragma once

#include "../Core/NBT.h"
#include "../dll.h"
#include "EntityServerPacket.h"

class AddEntityPacket : public EntityServerPacket {
public:
    inline ~AddEntityPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};