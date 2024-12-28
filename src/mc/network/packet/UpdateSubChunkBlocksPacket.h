#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
class SubChunkPos;
struct UpdateSubChunkBlocksChangedInfo;
struct UpdateSubChunkNetworkBlockInfo;
// clang-format on

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::UpdateSubChunkBlocksChangedInfo> mBlocksChanged;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>            mSubChunkBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacket& operator=(UpdateSubChunkBlocksPacket const&);
    UpdateSubChunkBlocksPacket(UpdateSubChunkBlocksPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSubChunkBlocksPacket() /*override*/;

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
    MCAPI UpdateSubChunkBlocksPacket();

    MCAPI UpdateSubChunkBlocksPacket(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

    MCAPI void setSubChunkPosition(::SubChunkPos const& subChunkPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );
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
