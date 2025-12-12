#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/Result.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class ReadOnlyBinaryStream;
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
    SubChunkRequestPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubChunkRequestPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C SubChunkRequestPacket(
        ::DimensionType                     dimensionType,
        ::SubChunkPos const&                playerPos,
        ::std::vector<::SubChunkPos> const& pos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void*
    $ctor(::DimensionType dimensionType, ::SubChunkPos const& playerPos, ::std::vector<::SubChunkPos> const& pos);
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
