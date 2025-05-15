#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class MotionPredictionHintsPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<4, 12, ::Vec3>          mMotion;
    ::ll::TypedStorage<1, 1, bool>             mOnGround;
    // NOLINTEND

public:
    // prevent constructor by default
    MotionPredictionHintsPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MotionPredictionHintsPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MotionPredictionHintsPacket(::Actor const& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
