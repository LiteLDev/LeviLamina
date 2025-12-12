#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class ReadOnlyBinaryStream;
// clang-format on

class LevelChunkPacket : public ::Packet {
public:
    // LevelChunkPacket inner types declare
    // clang-format off
    struct SubChunkMetadata;
    // clang-format on

    // LevelChunkPacket inner types define
    struct SubChunkMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> blobId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                           mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                      mDimensionId;
    ::ll::TypedStorage<1, 1, bool>                                                 mCacheEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsChunkInTickRange;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mSerializedChunk;
    ::ll::TypedStorage<8, 8, uint64>                                               mSubChunksCount;
    ::ll::TypedStorage<1, 1, bool>                                                 isClientPacket;
    ::ll::TypedStorage<1, 1, bool>                                                 mClientNeedsToRequestSubchunks;
    ::ll::TypedStorage<4, 4, int>                                                  mClientRequestSubChunkLimit;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkPacket::SubChunkMetadata>> mCacheMetadata;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkPacket() /*override*/ = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> readCacheMetadata(::ReadOnlyBinaryStream& stream);
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
