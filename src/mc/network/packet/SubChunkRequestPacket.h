#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class ReadOnlyBinaryStream;
class SubChunkPos;
// clang-format on

class SubChunkRequestPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>                                     mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>>                       mSubChunkPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacket::SubChunkPosOffset>> mSubChunkPosOffsets;
    ::ll::TypedStorage<4, 4, uint>                                                mRequestCount;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                      mCenterPos;
    ::ll::TypedStorage<1, 1, bool>                                                mArePositionsAbsolute;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRequestPacket& operator=(SubChunkRequestPacket const&);
    SubChunkRequestPacket(SubChunkRequestPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubChunkRequestPacket() /*override*/;

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
    MCAPI SubChunkRequestPacket();
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
