#pragma once

#include "../Actor/Skin/SerializedSkin.h"
#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../dll.h"

class CorrectPlayerMovePredictionPacket : public Packet {
public:
    Vec3     pos;
    Vec3     delta;
    bool     onGround;
    uint64_t tick; // 72

    inline ~CorrectPlayerMovePredictionPacket() {
    }

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(CorrectPlayerMovePredictionPacket, tick) == 72);