#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/platform/Result.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class MobEffectPacket : public ::Packet {
public:
    // MobEffectPacket inner types define
    enum class Event : uchar {
        Invalid = 0,
        Add     = 1,
        Update  = 2,
        Remove  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>         mRuntimeId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>         mEffectDurationTicks;
    ::ll::TypedStorage<1, 1, ::MobEffectPacket::Event> mEventId;
    ::ll::TypedStorage<4, 4, int>                      mEffectId;
    ::ll::TypedStorage<4, 4, int>                      mEffectAmplifier;
    ::ll::TypedStorage<1, 1, bool>                     mShowParticles;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>        mTick;
    // NOLINTEND

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
    virtual ~MobEffectPacket() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
