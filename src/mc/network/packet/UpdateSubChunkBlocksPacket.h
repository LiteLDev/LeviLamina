#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/network/packet/UpdateSubChunkNetworkBlockInfo.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    using BlocksChangedInfo = UpdateSubChunkBlocksChangedInfo;

    BlocksChangedInfo    mBlocksChanged;         // this+0x30
    NetworkBlockPosition mSubChunkBlockPosition; // this+0x60

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateSubChunkBlocksPacket@@UEAA@XZ
    virtual ~UpdateSubChunkBlocksPacket();

    // vIndex: 1, symbol: ?getId@UpdateSubChunkBlocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateSubChunkBlocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateSubChunkBlocksPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateSubChunkBlocksPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateSubChunkBlocksPacket@@QEAA@XZ
    MCAPI UpdateSubChunkBlocksPacket();

    // symbol:
    // ??0UpdateSubChunkBlocksPacket@@QEAA@AEBV?$vector@UUpdateSubChunkNetworkBlockInfo@@V?$allocator@UUpdateSubChunkNetworkBlockInfo@@@std@@@std@@0@Z
    MCAPI
    UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkNetworkBlockInfo> const&, std::vector<struct UpdateSubChunkNetworkBlockInfo> const&);

    // symbol: ?setSubChunkPosition@UpdateSubChunkBlocksPacket@@QEAAXAEBVSubChunkPos@@@Z
    MCAPI void setSubChunkPosition(class SubChunkPos const& subChunkPos);

    // NOLINTEND
};
