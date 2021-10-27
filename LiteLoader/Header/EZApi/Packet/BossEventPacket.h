#pragma once

#include <cstdint>
#include <string>

#include "../Actor/ActorUniqueID.h"
#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

enum class BossEventUpdateType {
    SHOW              = 0,
    REGISTER_PLAYER   = 1,
    UPDATE            = 1,
    HIDE              = 2,
    UNREGISTER_PLAYER = 3,
    HEALTH_PERCENT    = 4,
    TITLE             = 5,
    TOGGLE_FOG        = 6,
    TEXTURE           = 7
};

class BossEventPacket : public Packet {
public:
    int                 FLAG_DARKEN = 1;
    int                 FLAG_FOG    = 2;
    ActorUniqueID       owner, player;
    BossEventUpdateType type;
    std::string         name;
    float               percent = 0.0f;
    unsigned            color = 0, overlay = 0;
    bool                darken_sky = false, fog = false;

    inline ~BossEventPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(BossEventPacket, owner) == 56);
static_assert(offsetof(BossEventPacket, player) == 64);
static_assert(offsetof(BossEventPacket, type) == 72);
static_assert(offsetof(BossEventPacket, name) == 80);
static_assert(offsetof(BossEventPacket, percent) == 112);
static_assert(offsetof(BossEventPacket, color) == 116);
static_assert(offsetof(BossEventPacket, overlay) == 120);
static_assert(offsetof(BossEventPacket, darken_sky) == 124);
static_assert(offsetof(BossEventPacket, fog) == 125);