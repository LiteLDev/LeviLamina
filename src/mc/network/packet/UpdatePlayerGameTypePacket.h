#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/GameType.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdatePlayerGameTypePacket : public ::Packet {
public:
    GameType      mPlayerGameType; // this+0x30
    ActorUniqueID mTargetPlayer;   // this+0x38
    int           mTick;

    // prevent constructor by default
    UpdatePlayerGameTypePacket& operator=(UpdatePlayerGameTypePacket const&);
    UpdatePlayerGameTypePacket(UpdatePlayerGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdatePlayerGameTypePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdatePlayerGameTypePacket();

    MCAPI UpdatePlayerGameTypePacket(::GameType, struct ActorUniqueID const&, uint64);

    // NOLINTEND
};
