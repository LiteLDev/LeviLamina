#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class LevelChunkPacket : public ::Packet {
public:
    struct SubChunkMetadata {
        uint64 blobId; // this+0x0
    };

public:
    ChunkPos                      mPos;                           // this+0x30
    DimensionType                 mDimensionType;                 // this+0x38
    bool                          mCacheEnabled;                  // this+0x3C
    bool                          mIsChunkInTickRange;            // this+0x3D
    std::string                   mSerializedChunk;               // this+0x40
    uint64                        mSubChunksCount;                // this+0x60
    bool                          mIsClientPacket;                // this+0x68
    bool                          mClientNeedsToRequestSubchunks; // this+0x69
    int                           mClientRequestSubChunkLimit;    // this+0x6c
    std::vector<SubChunkMetadata> mCacheMetadata;                 // this+0x70

    // prevent constructor by default
    LevelChunkPacket& operator=(LevelChunkPacket const&);
    LevelChunkPacket(LevelChunkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelChunkPacket();

    MCAPI void pushSubChunkMetadata(uint64 id);

    MCAPI class Bedrock::Result<void> readCacheMetadata(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
