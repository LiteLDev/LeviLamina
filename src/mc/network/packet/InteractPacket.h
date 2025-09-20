#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types define
    enum class Action : uchar {
        Invalid        = 0,
        StopRiding     = 3,
        InteractUpdate = 4,
        NpcOpen        = 5,
        OpenInventory  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::InteractPacket::Action> mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>         mTargetId;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPos;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~InteractPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InteractPacket(::InteractPacket::Action action, ::ActorRuntimeID targetId, ::Vec3 const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InteractPacket::Action action, ::ActorRuntimeID targetId, ::Vec3 const& pos);
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
