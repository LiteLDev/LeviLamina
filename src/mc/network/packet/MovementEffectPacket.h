#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/effect/MovementEffectType.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
struct PlayerInputTick;
// clang-format on

class MovementEffectPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>     mRuntimeId;
    ::ll::TypedStorage<4, 4, ::MovementEffectType> mEffectType;
    ::ll::TypedStorage<4, 4, int>                  mEffectDuration;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>    mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectPacket& operator=(MovementEffectPacket const&);
    MovementEffectPacket(MovementEffectPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~MovementEffectPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementEffectPacket();

    MCAPI MovementEffectPacket(::ActorRuntimeID runtimeId, ::MovementEffectType effectType, int duration, uint64 tick);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorRuntimeID runtimeId, ::MovementEffectType effectType, int duration, uint64 tick);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
