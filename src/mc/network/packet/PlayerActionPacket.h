#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

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
        class BlockPos const& resultPos,
        int                   data,
        class ActorRuntimeID  runtimeId
    );

    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    MCAPI void setFromServerPlayerMovementSystem(bool value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        ::PlayerActionType    action,
        class BlockPos const& pos,
        class BlockPos const& resultPos,
        int                   data,
        class ActorRuntimeID  runtimeId
    );

    MCAPI void* ctor$(::PlayerActionType action, class BlockPos const& pos, class ActorRuntimeID runtimeId);

    MCAPI void* ctor$(::PlayerActionType action, class BlockPos const& pos, uchar face, class ActorRuntimeID runtimeId);

    MCAPI void* ctor$(::PlayerActionType action, class BlockPos const& pos, int data, class ActorRuntimeID runtimeId);

    MCAPI void* ctor$();

    MCAPI void* ctor$(::PlayerActionType action, class ActorRuntimeID runtimeId);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
