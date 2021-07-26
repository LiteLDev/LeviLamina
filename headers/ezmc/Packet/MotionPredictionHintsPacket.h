#pragma once

#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../dll.h"

class MotionPredictionHintsPacket : public Packet {
public:
    ActorRuntimeID rid;
    Vec3           motion;
    bool           onGround; // 68

    inline ~MotionPredictionHintsPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const = 0;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(MotionPredictionHintsPacket, onGround) == 68);