#pragma once

#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../Math/Vec2.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class PlayerAuthInputPacket : public Packet {
public:
    Vec3  pos;
    float pitch;
    float yaw;
    float headYaw;
    Vec2  motion;
    // todo

    inline ~PlayerAuthInputPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual StreamReadResult   _read(ReadOnlyBinaryStream&);

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(PlayerAuthInputPacket, pos) == 48);