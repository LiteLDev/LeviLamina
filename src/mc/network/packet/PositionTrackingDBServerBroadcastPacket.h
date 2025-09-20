#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class PositionTrackingDBServerBroadcastPacket : public ::Packet {
public:
    // PositionTrackingDBServerBroadcastPacket inner types define
    enum class Action : uchar {
        Update   = 0,
        Destroy  = 1,
        NotFound = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PositionTrackingDBServerBroadcastPacket::Action> mAction;
    ::ll::TypedStorage<4, 4, ::PositionTrackingId>                              mId;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                                    mData;
    // NOLINTEND

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
    virtual ~PositionTrackingDBServerBroadcastPacket() /*override*/;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
