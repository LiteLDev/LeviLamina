#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

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
    // vIndex: 0, symbol: __gen_??1LevelChunkPacket@@UEAA@XZ
    virtual ~LevelChunkPacket() = default;

    // vIndex: 1, symbol: ?getId@LevelChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LevelChunkPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LevelChunkPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LevelChunkPacket@@QEAA@XZ
    MCAPI LevelChunkPacket();

    // symbol: ?pushSubChunkMetadata@LevelChunkPacket@@QEAAX_K@Z
    MCAPI void pushSubChunkMetadata(uint64 id);

    // symbol:
    // ?readCacheMetadata@LevelChunkPacket@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> readCacheMetadata(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
