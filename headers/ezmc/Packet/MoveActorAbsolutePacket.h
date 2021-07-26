#pragma once

#include "../Core/Packet.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class MoveActorAbsolutePacket : public Packet {
public:
    enum struct Flags : uint8_t { teleport  = 1,
                                  on_ground = 2 };

    ActorRuntimeID rid;
    Flags          flags = Flags::teleport;
    Vec3           pos;
    char           pitch = 0, head_yaw = 0, yaw = 0;

    inline ~MoveActorAbsolutePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(MoveActorAbsolutePacket, rid) == 48);