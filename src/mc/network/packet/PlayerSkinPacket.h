#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlayerSkinPacket : public ::Packet {
public:
    mce::UUID      mUUID;                 // this+0x30
    SerializedSkin mSkin;                 // this+0x40
    std::string    mLocalizedNewSkinName; // this+0x2A8
    std::string    mLocalizedOldSkinName; // this+0x2C8

    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&);
    PlayerSkinPacket(PlayerSkinPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSkinPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerSkinPacket();

    // NOLINTEND
};
