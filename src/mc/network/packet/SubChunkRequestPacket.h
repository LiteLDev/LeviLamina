#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SubChunkRequestPacket : public ::Packet {
public:
    DimensionType                                  mDimensionType;      // this+0x30
    std::vector<SubChunkPos>                       mSubChunkPos;        // this+0x38
    std::vector<SubChunkPacket::SubChunkPosOffset> mSubChunkPosOffsets; // this+0x50
    uint                                           mRequestCount;       // this+0x68
    SubChunkPos                                    mCenterPos;          // this+0x6C

    bool mArePositionsAbsolute; // this+0x78


    // prevent constructor by default
    SubChunkRequestPacket& operator=(SubChunkRequestPacket const&);
    SubChunkRequestPacket(SubChunkRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SubChunkRequestPacket@@UEAA@XZ
    virtual ~SubChunkRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@SubChunkRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SubChunkRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SubChunkRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SubChunkRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SubChunkRequestPacket@@QEAA@XZ
    MCAPI SubChunkRequestPacket();

    // NOLINTEND
};
