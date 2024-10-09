#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/player/PlayerActionType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

class PlayerActionPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;                               // this+0x30
    NetworkBlockPosition mResultPos;                         // this+0x3C
    int                  mFace;                              // this+0x48
    PlayerActionType     mAction;                            // this+0x4C
    ActorRuntimeID       mRuntimeId;                         // this+0x50
    bool                 mtIsFromServerPlayerMovementSystem; // this+0x58

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
        class BlockPos const& resultPos,
        int                   data,
        class ActorRuntimeID  runtimeId
    );

    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    MCAPI void setFromServerPlayerMovementSystem(bool value);

    // NOLINTEND
};
