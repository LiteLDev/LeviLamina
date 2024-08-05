#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerActionType.h"

class PlayerActionPacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerActionPacket& operator=(PlayerActionPacket const&);
    PlayerActionPacket(PlayerActionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerActionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerActionPacket();

    MCAPI PlayerActionPacket(::PlayerActionType action, class ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(::PlayerActionType action, class BlockPos const& pos, class ActorRuntimeID runtimeId);

    MCAPI
    PlayerActionPacket(::PlayerActionType action, class BlockPos const& pos, int data, class ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(
        ::PlayerActionType    action,
        class BlockPos const& pos,
        uchar                 face,
        class ActorRuntimeID  runtimeId
    );

    MCAPI PlayerActionPacket(
        ::PlayerActionType    action,
        class BlockPos const& pos,
        class BlockPos const&,
        int                  data,
        class ActorRuntimeID runtimeId
    );

    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    MCAPI void setFromServerPlayerMovementSystem(bool);

    // NOLINTEND
};
