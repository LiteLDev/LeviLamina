#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class PositionTrackingId;
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
    // prevent constructor by default
    PositionTrackingDBServerBroadcastPacket& operator=(PositionTrackingDBServerBroadcastPacket const&);
    PositionTrackingDBServerBroadcastPacket(PositionTrackingDBServerBroadcastPacket const&);

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
    virtual ~PositionTrackingDBServerBroadcastPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PositionTrackingDBServerBroadcastPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
