#pragma once

#include "../Core/NBT.h"
#include "../dll.h"
#include "AddEntityPacket.h"

class AddVolumeEntityPacket : public AddEntityPacket {
public:
    CompoundTag data;

    inline ~AddVolumeEntityPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(AddVolumeEntityPacket, data) == 56);