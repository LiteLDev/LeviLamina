#pragma once

#include "../Core/AutomaticID.h"
#include "../Core/Packet.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class Dimension;

class ChangeDimensionPacket : public Packet {
public:
    AutomaticID<Dimension, int> dim;
    Vec3                        pos;
    bool                        respawn = false;

    inline ~ChangeDimensionPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(ChangeDimensionPacket, respawn) == 64);