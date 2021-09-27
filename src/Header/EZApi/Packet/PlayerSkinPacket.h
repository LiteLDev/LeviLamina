#pragma once

#include "../Actor/Skin/SerializedSkin.h"
#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../dll.h"

class PlayerSkinPacket : public Packet {
public:
    mce::UUID      uuid;
    SerializedSkin skin;
    std::string    new_name, old_name;

    inline ~PlayerSkinPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(PlayerSkinPacket, skin) == 64);
static_assert(offsetof(PlayerSkinPacket, new_name) == 576);
static_assert(offsetof(PlayerSkinPacket, old_name) == 608);
