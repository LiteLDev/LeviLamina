#include "../Actor/ActorRuntimeID.h"
#include "../Math/Vec3.h"

class MovePlayerPacket : public Packet {

public:
    ActorRuntimeID rid;
    Vec3           pos;
    float          pitch = 0, yaw = 0, head_yaw = 0;
    uint8_t        mode;
    bool           onGround;
    ActorRuntimeID ridingActorId;
    int            tpCause;

    inline ~MovePlayerPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};