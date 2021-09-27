#pragma once

#include "../Actor/ActorRuntimeID.h"
#include "../Core/Packet.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class InteractPacket : public Packet {
public:
    enum struct Action : char { stop_riding    = 3,
                                mouse          = 4,
                                open_container = 6 };
    Action         action = Action::mouse;
    ActorRuntimeID actor;
    Vec3           pos;

    inline ~InteractPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};