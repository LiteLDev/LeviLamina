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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ChunkRadiusUpdatedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ChunkRadiusUpdatedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ChunkRadiusUpdatedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ChunkRadiusUpdatedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ChunkRadiusUpdatedPacket@@UEAA@XZ
    MCVAPI ~ChunkRadiusUpdatedPacket();

    // symbol: ??0ChunkRadiusUpdatedPacket@@QEAA@H@Z
    MCAPI explicit ChunkRadiusUpdatedPacket(int);

    // symbol: ??0ChunkRadiusUpdatedPacket@@QEAA@XZ
    MCAPI ChunkRadiusUpdatedPacket();

    // NOLINTEND
};
