#pragma once

#include "../Actor/ActorRuntimeID.h"
#include "../Core/Packet.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class SpawnParticleEffectPacket : public Packet {
public:
    char           dim = 0;
    ActorRuntimeID actor_id;
    Vec3           pos;
    std::string    id;

    inline SpawnParticleEffectPacket() {
    }
    inline ~SpawnParticleEffectPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(SpawnParticleEffectPacket, dim) == 48);
static_assert(offsetof(SpawnParticleEffectPacket, id) == 80);