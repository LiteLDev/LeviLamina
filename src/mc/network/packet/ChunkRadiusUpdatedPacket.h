#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ChunkRadiusUpdatedPacket : public ::Packet {
public:
    int mChunkRadius; // this+0x30

    // prevent constructor by default
    ChunkRadiusUpdatedPacket& operator=(ChunkRadiusUpdatedPacket const&);
    ChunkRadiusUpdatedPacket(ChunkRadiusUpdatedPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChunkRadiusUpdatedPacket@@UEAA@XZ
    virtual ~ChunkRadiusUpdatedPacket();

    // vIndex: 1, symbol: ?getId@ChunkRadiusUpdatedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ChunkRadiusUpdatedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ChunkRadiusUpdatedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ChunkRadiusUpdatedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ChunkRadiusUpdatedPacket@@QEAA@XZ
    MCAPI ChunkRadiusUpdatedPacket();

    // symbol: ??0ChunkRadiusUpdatedPacket@@QEAA@H@Z
    MCAPI explicit ChunkRadiusUpdatedPacket(int chunkRadius);

    // NOLINTEND
};
