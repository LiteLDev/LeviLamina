#pragma once

#include "../Core/Packet.h"
#include "../Math/Vec2.h"
#include "../dll.h"

class PlayerInputPacket : public Packet {
public:
    Vec2 motion;
    bool jump = false, sneak = false;

    inline ~PlayerInputPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};